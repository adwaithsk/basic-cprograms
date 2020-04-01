/* To Generate Pattern :

*
*  *
*  *  *
*  *  *  *
*  *  *  *  *

*/

#include<stdio.h>

int main()
{
    int j ;
    printf(" \n \n Pattern : \n \n") ;

    for(int i=1;i<=4;i++)
    {
        for(j=i;j>0;j--)
            printf(" * ") ;
    printf("\n") ;
    }
}
