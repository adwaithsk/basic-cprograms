/* To Generate Pattern :

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

#include<stdio.h>

int main()
{
    int j,c=1;
    printf(" \n \n Pattern : \n \n") ;

    for(int i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            {
                printf(" %d",i) ;
            }
    printf("\n") ;
    }
}

