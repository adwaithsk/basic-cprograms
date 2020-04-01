
/* Program to generate the series :

1+1/1!+1/2!……….+1/n!

*/

#include <stdio.h>

int main()
{
    int n,fact ;

    printf(" \n Input Limit : ");
    scanf("%d",&n);

    printf(" \n The Series : 1 ") ;

    for(int i=0;i<n;i++)
    {
        fact = 1;
        for(int j=1;j<=i;j++)
             fact *= j ;

        printf(" + 1/%d",fact) ;
    }
}
