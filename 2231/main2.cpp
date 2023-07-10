/*어떤 자연수 N이 있을 때, 그 자연수 N의 분해합은 N과 N을 이루는 각 자리수의 합을 의미한다. 어떤 자연수 M의 분해합이 N인 경우, M을 N의 생성자라 한다. 예를 들어, 245의 분해합은 256(=245+2+4+5)이 된다. 따라서 245는 256의 생성자가 된다. 물론, 어떤 자연수의 경우에는 생성자가 없을 수도 있다. 반대로, 생성자가 여러 개인 자연수도 있을 수 있다.

자연수 N이 주어졌을 때, N의 가장 작은 생성자를 구해내는 프로그램을 작성하시오.*/

#include <iostream>
#include <cmath>
using namespace std;

bool loop(int n, int d1, int* result)
{
    int remain;
    int d2 = d1 / 10;
    
    if (d1 == 1)
    {
        if (n > 18 || n % 2 == 1)
            return false;
        else if (n <= 18 && n % 2 == 0)
        {
            *result += n >> 1;
            return true;
        }
    }
    else
    {
        for (int i = 0; i <= 9; i++)
        {
            remain = n - (d1 + 1) * i;
            if (remain >= (d2 + 1) * 18)
                continue;
            else
            {
                if (loop(remain, d2, result))
                {
                    *result += d1 * i;
                    return true;
                }
                else
                    continue;
            }
        }
    }
    return false;
}
int main()
{

    int n;
    cin >> n;

    int digit = 0, first = n;
    while (first >= 10)
    {
        digit++;
        first /= 10;
    }

    int res = 0;
    if (!digit)
    {
        if (n % 2 == 0)
            res = n >> 1;
        else
            res = 0;
    }
    else
    {
        int remain;
        int d2 = pow(10, digit - 1), d1 = d2 * 10;

        for (int i = first - 1; i <= first; i++)
        {
            remain = n - (d1 + 1) * i;
            if (remain >= (d2 + 1) * 18)
                continue;
            else
            {
                if (loop(remain, d2, &res))
                {
                    res += d1 * i;
                    break;
                }
                else
                    res = 0;
            }
        }
    }

    cout << res;

    return 0;
}