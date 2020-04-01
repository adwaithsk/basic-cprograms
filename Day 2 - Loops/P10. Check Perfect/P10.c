// Program to check if the input number is Perfect or not


#include <stdio.h>

int main()
{

    int n,check=0 ;
    printf(" \n Input the Number to be Checked : ") ;
    scanf("%d",&n) ;

    for(int i=1 ; i<n ; i++)
    {
        if(n%i == 0)
        {
            check += i ;
        }
    }

    if(check == n)
        printf(" \n %d is a Perfect Number.",n) ;
    else
        printf(" \n %d is NOT a Perfect Number.",n) ;


}

