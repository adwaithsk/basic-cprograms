// Program to find the transpose of a matrix

#include <stdio.h>

int main()
{

    int m[3][3],i,j;

    printf("\n Input Values to Matrix (3x3) : \n ") ;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Input Value to (r%d,c%d) : ",i+1,j+1);
            scanf("%d",&m[i][j]) ;
        }
    }

    printf("\n Matrix (3x3) : \n
           ") ;
    for(int i=0;i<3;i++)
    {
        printf(" | ") ;

        for(int j=0;j<3;j++)
        {
            printf(" %d ",m[i][j]) ;
        }
        printf(" | \n") ;
    }

    printf("\n Transpose of the Matrix (3x3) : \n") ;
    for(int i=0;i<3;i++)
    {
        printf(" | ") ;

        for(int j=0;j<3;j++)
        {
            printf(" %d ",m[j][i]) ;
        }
        printf(" | \n") ;
    }


}
