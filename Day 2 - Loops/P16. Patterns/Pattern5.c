/* To Generate Pattern :

1
2  3
4   5   6
7    8   9  10
10    11  12  13  14

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
                printf(" %d",c) ;
                c++;
            }
        if(c==11)
            --c;
    printf("\n") ;
    }
}

