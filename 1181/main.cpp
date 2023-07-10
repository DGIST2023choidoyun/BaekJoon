/*알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

길이가 짧은 것부터
길이가 같으면 사전 순으로
단, 중복된 단어는 하나만 남기고 제거해야 한다.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool mycompare(const string& s1, const string& s2)
{
    int l1 = s1.length(), l2 = s2.length();
    if (l1 == l2)
        return s1 < s2;
    return l1 < l2;
}
int main()
{
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<string> str;
    string buffer;
    int n, i;
    int deleted = 0;
    cin >> n;
    i = n;

    while (n--)
    {
        cin >> buffer;
        str.push_back(buffer);
    }

    sort(str.begin(), str.end(), mycompare);

    auto iter = str.begin() + 1;

    for (; iter != str.end(); iter++)
    {
        if (*iter == *(iter - 1))
        {
            str.erase(iter - 1);
            deleted++;
            iter--;
        }
    }

    while (n++ < i - deleted - 1)
        cout << str[n] << '\n';
    

    return 0;
}