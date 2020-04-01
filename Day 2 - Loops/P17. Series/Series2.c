
/* Program to generate the series :

1 + x/1! + x3/2! + x5/3! + … ………….+ x2n-1/n!

*/

#include <stdio.h>

int main()
{
    int n,x,fact,p,po=1;

    printf(" \n Input Limit : ");
    scanf("%d",&n);

    printf(" \n Input Value of X : ");
    scanf("%d",&x);


    printf(" \n The Series : 1 ") ;

    for(int i=1;i<n;i++)
    {
        fact = 1;
        po = 1 ;
        for(p=1;p<=((2*i)-1);p++)
        {
          po*= x ;
        }
        for(int j=1;j<=i;j++)
             fact *= j ;

        printf(" + %d/%d",po,fact) ;
    }
}

