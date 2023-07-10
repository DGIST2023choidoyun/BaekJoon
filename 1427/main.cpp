/*배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, };
    int n;
    cin >> n;

    do
    {
        arr[n % 10]++;
    }while (n /= 10);

    int i = 10;
    while (i--)
        while (arr[i]--)
            cout << i;

    return 0;
}