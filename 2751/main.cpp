/*N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.*/

#include <iostream>
using namespace std;

void quicksort(int* number, int l, int r)
{
    int L = l, R = r;
    int pivot = (l + r) / 2;

    while (l <= r)
    {
        while (number[l] < number[pivot])
            l++;
        while (number[r] > number[pivot])
            r--;

        if (l <= r)
        {
            int temp = number[l];
            number[l] = number[r];
            number[r] = temp;
            l++;
            r--;
        }
    }
    if (L < r)
        quicksort(number, L, r);
    if (l < R)
        quicksort(number, l, R);
}

int main()
{
    int n;
    int* number;
    cin >> n;
    number = new int[n];
    
    for(int i = 0; i < n; i++)
        cin >> number[i];

    quicksort(number, 0, n - 1);

    for(int i = 0; i < n; i++)
        cout << number[i] << '\n';

    return 0;
}