
//Program to check if number is prime or not.


#include <stdio.h>

int main()
{

    int n,j,flag=0;
    char c;

  do
   {
    printf(" \n Input the Number to be checked : ");
    scanf("%d",&n) ;

     if(n==1)
        printf(" \n %d is a Composite Number.",n) ;
     if(n==2)
        printf(" \n %d is a Prime Number.",n) ;


    for(int i=2;i<n;i++)
     {

        if (n%i==0)
         {
             flag = 1 ;
             break ;
         }

     }

     if(flag==0)
        printf(" \n %d is a Prime Number.",n) ;
     else
        printf(" \n %d is NOT a Prime Number.\n",n) ;

     printf(" \n Do You Want to Continue Checking? (Y/N) : ") ;
     scanf("%s",&c) ;

   }while(c=='Y'||c=='y');

}
