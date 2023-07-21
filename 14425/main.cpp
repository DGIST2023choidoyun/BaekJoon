/*총 N개의 문자열로 이루어진 집합 S가 주어진다.

입력으로 주어지는 M개의 문자열 중에서 집합 S에 포함되어 있는 것이 총 몇 개인지 구하는 프로그램을 작성하시오.*/

#include <iostream>
//#include <string>
#include <set>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n, m, i, cnt = 0;
    string temp;
    set<string> str;
    cin >> n >> m;

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        str.insert(temp);
    }

    while (m--)
    {
        cin >> temp;
        if (str.find(temp) != str.end())
            cnt++;
    }
    
    cout << cnt;

    return 0;
}