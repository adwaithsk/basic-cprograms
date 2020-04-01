// Program to check if the input number is Amstrong or not


#include <stdio.h>

int main()
{

    int n,temp,d,check=0 ; // d = variable to store individual digits.

    printf(" \n Input the Number to be Checked : ") ;
    scanf("%d",&n) ;

    temp = n ;

    while(temp>0)
    {
        d = temp%10 ;
        temp /= 10 ;
        check = check + (d*d*d);
    }

    if(check == n)
        printf(" \n %d is an Amstrong Number.",n) ;
    else
        printf(" \n %d is NOT an Amstrong Number.",n) ;


}
