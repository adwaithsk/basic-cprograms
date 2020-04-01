// Program to generate all Strong numbers between 100 and 1000.


#include <stdio.h>

int main()
{

    int temp,d,fact=1,sum=0 ; // d = variable to store individual digits.

    printf(" \n Strong Number between 100 & 100000 are : \n \n ") ;

    for(int i=100;i<100000;i++)
    {
        temp = i ;
        sum = 0;

        while(temp>0)
        {
             fact = 1 ;
             d = temp%10 ;
             temp /= 10 ;

          for(int j=1;j<=d;j++)
             fact *= j ;

        sum += fact ;
        }
        if(sum == i)
        printf(" %d ",i) ;
    }

}

