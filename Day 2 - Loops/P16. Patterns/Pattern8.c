
/* To Generate Pattern :

1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

*/

#include<stdio.h>

int main()
{
    int j;
    printf(" \n \n Pattern : \n \n") ;

    for(int i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
            printf(" %d ",j) ;

        printf("\n") ;
    }
}


