
/*알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
*/

#include <iostream>
using namespace std;


int main()
{
    string str;
    int cnt[26] = {0, };
    int i = 0;

    cin >> str;

    int l = str.length();
    while (i < l)
    {
        int idx;

        if (str[i] >= 97)
            idx = str[i] - 97;
        else
            idx = str[i] - 65;
        cnt[idx]++;
        
        i++;
    }
    
    int max = 0;
    char res;
    for (i = 0; i < 26; i++)
    {
        if (max == cnt[i])
            res = '?';
        else if (max < cnt[i])
        {
            res = i + 65;
            max = cnt[i];
        }
    }

    cout << res;

    return 0;
}