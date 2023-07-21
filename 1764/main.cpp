/*김진영이 듣도 못한 사람의 명단과, 보도 못한 사람의 명단이 주어질 때, 듣도 보도 못한 사람의 명단을 구하는 프로그램을 작성하시오.*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m, i = 1, cnt = 0;
    string temp;
    map<string, int> list;
    cin >> n >> m;

    while (n--)
    {
        cin >> temp;
        list[temp] = i;
        i += 2;
    }

    while (m--)
    {
        cin >> temp;
        list[temp]++;
        if (!(list[temp] % 2))
            cnt++;
    }

    cout << cnt << '\n';

    auto iter = list.begin();
    for (; iter != list.end(); iter++)
        if (!((*iter).second % 2))
            cout << (*iter).first << '\n';


    return 0;
}