// Program to find the sum of two matrices.

#include <stdio.h>

int main()
{

    int m1[3][3],m2[3][3],sum[3][3],i,j ;

    printf("\n Input Values to Matrix 1 (3x3) : \n ") ;

    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            printf("\n Input Value to (r%d,c%d) : ",i+1,j+1);
            scanf("%d",&m1[i][j]) ;
        }
    }

    printf("\n Input Values to Matrix 2 (3x3) : \n ") ;

    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            printf("\n Input Value to (r%d,c%d) : ",i+1,j+1);
            scanf("%d",&m2[i][j]) ;
        }
    }

    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            sum[i][j] = m1[i][j]+m2[i][j] ;
        }
    }

    printf(" \n \n Sum of the two matrices : \n");

    for(int i=0;i<3;i++)
    {
        printf(" | ") ;

        for(int j=0;j<3;j++)
        {
            printf(" %d ",sum[i][j]) ;
        }
        printf(" | \n") ;
    }

}
