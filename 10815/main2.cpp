#include<iostream>
using namespace std;

int n, k, s = 10000000, a[20000005];

int main()
{
    cin.tie(0);

    for(cin >> n; n--; a[k + s] = 1)
        cin >> k;

    for(cin >> n; cin >> k; cout << a[k + s] << ' ');//n, m 통합

    return 0;
}