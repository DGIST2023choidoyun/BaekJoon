#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int number = 0;

    cin >> str;

    for (unsigned int i = 0; i < str.length(); i++)
    {
        number++;
        if (str[i] == 'c')
        {
            if (str[i+1] == '-' || str[i+1] == '=')
                i++;
        }
        else if ((str[i] == 'n' || str[i] == 'l') && str[i+1] == 'j')
            i++;
        else if ((str[i] == 's' || str[i] == 'z') && str[i+1] == '=')
            i++;
        else if (str[i] == 'd')
        {
            if (str[i+1] == '-')
                i++;
            else if (str[i+1] == 'z' && str[i+2] == '=')
                i += 2;
        }
    }

    cout << number;
    return 0;
}