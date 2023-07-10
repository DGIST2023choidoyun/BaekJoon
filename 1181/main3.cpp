/*알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

길이가 짧은 것부터
길이가 같으면 사전 순으로
단, 중복된 단어는 하나만 남기고 제거해야 한다.*/

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

const char* s1, *s2;
int mycompare(const void* a, const void* b)
{
    s1 = *(const char**)a;
    s2 = *(const char**)b;
    int l1 = strlen(s1), l2 = strlen(s2);
    
    if (l1 == l2)
        return strcmp(s1, s2) > 0;
    return l1 - l2;
}
int main()
{
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);

    char** str;
    int n, i;
    cin >> n;
    i = n;
    str = new char*[n];

    while (n--)
    {
        str[n] = new char[51];
        cin >> str[n];
    }

    qsort(str, i, sizeof(const char*), mycompare);

    for (++n; n < i; n++)
    {
        if (n > 0 && !strcmp(str[n], str[n - 1]))
            continue;
        cout << str[n] << '\n';
    }

    return 0;
}