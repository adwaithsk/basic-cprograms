
//Program to generate Prime numbers between two limits a & b set interactively by the user.

#include <stdio.h>

int main()
{

    int a,b,n,j,flag=0;

    printf(" \n Input Lower Limit: ");
    scanf("%d",&a) ;

    printf(" \n Input Upper Limit: ");
    scanf("%d",&b) ;

    printf(" \n The Prime Numbers between %d & %d are : \n \n  ",a,b) ;

    for(int i=a;i<b;i++)
    {
        if(i==2)
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
