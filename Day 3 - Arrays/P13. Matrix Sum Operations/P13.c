/*	Program to find sum of
        a.	Top row elements of a matrix
        b.	Diagonal Elements of a matrix
        c.	Bottom row elements of a matrix
*/

#include <stdio.h>

int main()

{

    int m[3][3],i,j,op,sum=0;
    char c ;

    printf("\n Input Values to Matrix (3x3) : \n ") ;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Input Value to (r%d,c%d) : ",i+1,j+1);
            scanf("%d",&m[i][j]) ;
        }
    }

    //To Display the matrix

    printf("\n Matrix (3x3) : \n") ;
    for(int i=0;i<3;i++)
    {
        printf(" | ") ;

        for(int j=0;j<3;j++)
        {
            printf(" %d ",m[i][j]) ;
        }
        printf(" | \n") ;
    }


  do
   {
    printf("\n \n Choose Sum operation to perform : \n (1)Top row elements. \n (2) Diagonal Elements. \n (3) Bottom row elements. \n \n : ") ;
    scanf("%d",&op) ;
    sum=0 ;
    switch(op)
    {
    case 1 :
         for(int i=0;i<3;i++)
            sum += m[0][i] ;
         break ;

    case 2 :
          for(int i=0;i<3;i++)
            sum += m[i][i] ;
         break ;

    case 3 :
         for(int i=0;i<3;i++)
            sum += m[2][i] ;
         break ;
    default :
        printf("\n \n Invalid Option Chosen.") ;
    }

    printf("\n \n Sum : %d",sum) ;

    printf("\n \n Do You Want Check Again? (Y/N)  : ") ;
    scanf("%s",&c) ;
   }while(c=='y' || c=='Y') ;
}

