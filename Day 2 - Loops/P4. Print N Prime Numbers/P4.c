//Program to generate first n prime numbers where n is entered interactively by the user.

#include <stdio.h>

int main()
{

    int n,j,flag=0;

    printf(" \n Input N : ");
    scanf("%d",&n) ;

    printf(" \n The First %d Prime Numbers are : \n ",n) ;

    for(int i=2;i<n;i++)
    {
        if(n==2)
           {
             printf(" 2 ") ;
             break ;
           }

            for(j=2;j<i;j++)
                {
                  if (i%j==0)
                    flag = 1 ;
                }
            if (flag==0)
              printf(" %d ",j) ;
            flag = 0 ;

    }
}
