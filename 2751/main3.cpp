#include <iostream>
using namespace std;

int main()
{
    int arr[2000001] = {0, };
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        arr[d + 1000000]++;
    }
    
    for (int i = 0; i < 2000001; i++)
        if (arr[i])
            cout << i - 1000000 << '\n';

    return 0;
}