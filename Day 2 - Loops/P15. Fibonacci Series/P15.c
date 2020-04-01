// Program to Generate the Fibonacci Series

#include<stdio.h>

int main()
{

    int l,p=0,n=1, t ;//p:previous term n:next term t:temporary to store sum

    printf(" \n Input length of series : ");
    scanf("%d",&l) ;

    printf(" \n \n The First %d elements of the Fibonacci Series are : \n \n",l) ;

   while(l!=0)
    {
      printf(" %d ",p) ;
      t = n + p;
      p = n ;
      n = t ;
     --l;
    }

}
