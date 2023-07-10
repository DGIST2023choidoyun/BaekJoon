#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    int title = 665;
    int temp;

    cin >> n;

    while (cnt != n) {
        title++;
        temp = title;
        
        while (temp != 0) {
            if (temp % 1000 == 666) {
                cnt++;
                break;
            }
            else
                temp /= 10;
        }
    }

    cout << title;
}