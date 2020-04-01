// Program to check if an input number is a Palindrome or not

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
        check = check*10 + d;
    }

    if(check == n)
        printf(" \n %d is a Palindrome.",n) ;
    else
        printf(" \n %d is NOT a Palindrome.",n) ;


}
