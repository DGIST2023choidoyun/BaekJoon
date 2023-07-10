#include<ios>
int i,j,N;
main()
{
    for(scanf("%d",&N); N -= !!j;)//초기 입력값; N -= 0 or 1;
        for(j=++i; j && j % 1000-666; j/=10)
        /*
        1~9: N -= 0;
        10~99: N -= 0;
        100~665: N -= 0;
        666: N--;
        ...
        1666: N--;
        ...
        6662: N--;
        */
            ;

    printf("%d",i);
}