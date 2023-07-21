#include <iostream>
#include <set>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m, i = 1, cnt = 0;
    string temp;
    set<string> list;
    set<string> db;
    cin >> n >> m;

    while (n--)
    {
        cin >> temp;
        list.insert(temp);
    }

    while (m--)
    {
        cin >> temp;
        if (list.find(temp) != list.end())
        {
            cnt++;
            db.insert(temp);
        }
    }

    cout << cnt << '\n';

    auto iter = db.begin();
    for (; iter != db.end(); iter++)
        cout << *iter << '\n';


    return 0;
}