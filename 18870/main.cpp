/*수직선 위에 N개의 좌표 X1, X2, ..., XN이 있다. 이 좌표에 좌표 압축을 적용하려고 한다.

Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 서로 다른 좌표 Xj의 개수와 같아야 한다.

X1, X2, ..., XN에 좌표 압축을 적용한 결과 X'1, X'2, ..., X'N를 출력해보자.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, i, j, prev, cnt, temp;
    vector<int> coord;
    int* comp;
    cin >> n;
    comp = new int[n];

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        coord.push_back(temp);
        comp[i] = temp;
    }

    sort(coord.begin(), coord.end());

    coord.erase(unique(coord.begin(), coord.end()), coord.end());//O(n)

    for (i = 0; i < n; i++)
        cout << lower_bound(coord.begin(), coord.end(), comp[i]) - coord.begin() << ' ';//O(n)

    return 0;
}