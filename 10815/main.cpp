/*숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 가지고 있는지 아닌지를 구하는 프로그램을 작성하시오.*/

#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, i, temp;
    int* card;
    cin >> n;
    card = new int[n];

    for (i = 0; i < n; i++)
        cin >> card[i];

    sort(card, card + n);

    cin >> m;

    for (i = 0; i < m; i++)
    {
        cin >> temp;
        cout << binary_search(card, card + n, temp) << ' ';
    }

    return 0;
}