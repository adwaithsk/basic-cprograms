
/* Program to generate the series :

x - x2/2! + x3/3! - x4/4! + ………….. + xn/n!

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
        for(p=1;p<=i;p++)
        {
          po*= x ;
        }
        for(int j=1;j<=i;j++)
             fact *= j ;
        if(i%2==0)
            printf(" +");
        else
            printf(" -");

        printf("  %d/%d",po,fact) ;
    }
}


