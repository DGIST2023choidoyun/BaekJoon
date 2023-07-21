#include <iostream>
#include <set>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, i;
    string temp, exit;
    set<string> log;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> temp >> exit;
        if (!exit.compare("enter"))
            log.insert(temp);
        else
            log.erase(temp);
    }

    set<string>::reverse_iterator iter;
    for (iter = log.rbegin(); iter != log.rend(); iter++)
        cout << (*iter) << '\n';

    return 0;
}