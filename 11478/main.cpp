/*문자열 S가 주어졌을 때, S의 서로 다른 부분 문자열의 개수를 구하는 프로그램을 작성하시오.

부분 문자열은 S에서 연속된 일부분을 말하며, 길이가 1보다 크거나 같아야 한다.

예를 들어, ababc의 부분 문자열은 a, b, a, b, c, ab, ba, ab, bc, aba, bab, abc, abab, babc, ababc가 있고, 서로 다른것의 개수는 12개이다.*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s, temp;
    int l;
    unordered_set<string> all;
    cin >> s;
    l = s.size();

    for (int i = 0; i < l; i++)
    {
        temp = "";
        for (int j = i; j < l; j++)
        {
            temp += s[j];
            all.insert(temp);
        }
    }

    cout << all.size();

    return 0;
}