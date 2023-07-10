#include <iostream>
int a,b,c;
main()
{
    for(std::cin>>b;b;)
    {
        a=++c;
        do
        {
            if(a%1000==666)
            {
                b--;
                break;
            }
        }while(a/=10);
    }
    std::cout<<c;
}