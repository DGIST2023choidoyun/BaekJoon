#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int arr[10000] = {0, };
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        arr[d - 1]++;
    }
    
    for (int i = 0; i < 10000; i++)
        while (arr[i]--)
            cout << i + 1 << '\n';

    return 0;
}