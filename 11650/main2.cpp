/*2차원 평면 위의 점 N개가 주어진다. 좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.*/

#include <iostream>
#include <algorithm>
using namespace std;
#define hiword 10000000
#define loword 1000000
#define max 100000

int main()
{
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, i;
    long long* xy;
    long long x, y;
    int rear6, Case, sign;
    cin >> n;
    i = n;

    xy = new long long[n];

    while (n--)
    {
        cin >> x >> y;
        if (x >= 0)
            xy[n] = x * hiword + y + loword;
        else
            xy[n] = x * hiword + y - loword;
    }

    sort(xy, xy + i);

    for (int j = 0; j < i; j++)
    {
        sign = (xy[j] >= 0) ? 1 : -1;
        xy[j] *= sign;
        rear6 = xy[j] - xy[j] / loword * loword;
        Case = (xy[j] / loword) % 10;//0 or 1

        cout << xy[j] / hiword * sign << ' ' << (rear6 - !Case * loword) % 1000000 * sign << '\n';

        xy[j] *= sign;
    }
    
    cout << '\n';

    int cnt = 0;
    int x1, y1, x2, y2;
    for (int j = 0; j < i - 1; j++)
    {
        
        x1 = xy[j] / hiword;
        x2 = xy[j + 1] / hiword;

        sign = (xy[j] >= 0) ? 1 : -1;
        xy[j] *= sign;
        rear6 = xy[j] - xy[j] / loword * loword;
        Case = (xy[j] / loword) % 10;

        y1 = (rear6 - !Case * loword) % 1000000 * sign;

        xy[j] *= sign;

        j++;

        sign = (xy[j] >= 0) ? 1 : -1;
        xy[j] *= sign;
        rear6 = xy[j] - xy[j] / loword * loword;
        Case = (xy[j] / loword) % 10;

        y2 = (rear6 - !Case * loword) % 1000000 * sign;

        xy[j] *= sign;

        j--;

        if (x1 > x2)
        {
            cout << x1 << ' ' << y1 << '\n';
            cout << '\t' << x2 << ' ' << y2 << '\n';
            cnt++;
        }
        else if (y1 > y2 && x1 == x2)
        {
            cout << x1 << ' ' << y1 << '\n';
            cout << '\t' << x2 << ' ' << y2 << '\n';
            cnt++;
        }

    }

    cout << cnt;

    return 0;
}