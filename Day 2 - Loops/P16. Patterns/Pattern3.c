/* To Generate Pattern :

     *
    * *
   * * *
  * * * *
 * * * * *

*/

#include<stdio.h>

int main()
{
    int j,k,b=4 ;
    printf(" \n \n Pattern : \n \n") ;

    for(int i=1;i<=5;i++)
    {

        for(j=b ; j>0;j--)
            printf(" ") ;

        b-- ;

        for(j=i;j>0;j--)
            printf(" *") ;
    printf("\n") ;
    }
}

