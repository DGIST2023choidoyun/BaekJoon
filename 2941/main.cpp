#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char prev;
    int number = 0;

    cin >> str;

    for (unsigned int i = 0; i < str.length(); i++)
    {
        number++;

        switch(prev)
        {
            case 'c':
                if (str[i] == '-' || str[i] == '=')
                    number--;
                prev = 0;
            break;
            case 'd':
                if (str[i] == 'z')
                {
                    prev = 'Z';
                    break;
                }
                else if (str[i] == '-')
                    number--;
                prev = 0;

            break;
            case 'l':
            case 'n':
                if (str[i] == 'j')
                    number--;
                prev = 0;
                    
            break;
            case 's':
            case 'z':
                if (str[i] == '=')
                    number--;
                prev = 0;

            break;
            case 'Z':
                if (str[i] == '=')
                    number -= 2;
                prev = 0;

            break;
        }

        if (str[i] == 'c' || str[i] == 'd' || str[i] == 'l' || str[i] == 'n' || str[i] == 's' || (str[i] == 'z' && prev != 'Z'))
            prev = str[i];
    }

    cout << number;
    return 0;
}