# include <iostream>
using namespace std;

int* sorted;


void proc(int* arr, int start, int end)
{
    int i = start, mid = (start + end) / 2, j = ((start + end) / 2) + 1;
    int cnt = start;

    while(i <= mid && j <= end)
    {
        if(arr[i] < arr[j])
            sorted[cnt++] = arr[i++];
        else
            sorted[cnt++] = arr[j++];
    }

    while (i <= mid)
        sorted[cnt++] = arr[i++];
    while (j <= end)
        sorted[cnt++] = arr[j++];

    for(int i = start; i <= end; i++)
        arr[i] = sorted[i];
}
void merge(int* arr, int start, int end){
    if (start >= end)
        return;
    int mid = (start + end) / 2;
    merge(arr, start, mid);
    merge(arr, mid + 1, end);
    proc(arr, start, end);
}

int main()
{
    int* number;
    int n;
    cin >> n;
    number = new int[n];
    sorted = new int[n];

    for(int i = 0; i < n; i++)
        cin >> number[i];

    merge(number, 0, n - 1);

    for(int i = 0; i < n; i++)
        cout << number[i] << endl;

    return 0;
}