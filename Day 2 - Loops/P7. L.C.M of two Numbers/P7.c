// Program to find the L.C.M of two input Numbers

#include <stdio.h>

int main()
{

    int n1,n2,lcm,i=1 ;

    printf(" \n Input 1st Number :  ");
    scanf("%d",&n1) ;
    printf(" \n Input 2nd Number :  ");
    scanf("%d",&n2) ;

     if(n1>n2)
       lcm = n1 ;
     else
       lcm = n2 ;

    while(i=1)
    {
        if(lcm%n1 == 0 && lcm%n2 == 0)
        {
          printf(" \n The L.C.M of %d & %d is : %d .",n1,n2,lcm);
          i=0;
          break;
        }
        lcm++ ;
    }

}
