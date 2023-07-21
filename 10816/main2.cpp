/*숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m, temp;
    unordered_map<int, int> card;
    cin >> n;

    while (n--)
    {
        cin >> temp;
        if (card.find(temp) == end(card))//std::end(card) 가능
            card[temp] = 1;
        else
            card[temp]++;
    }

    istream >> m;
    while (m--)
    {
        cin >> temp;
        if (card.find(temp) != card.end())
            cout << card[temp] << ' ';
        else
            cout << "0 ";
    }
        

    return 0;
}