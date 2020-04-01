// Program to find the Sum of the Squares of N Natural Numbers.

# include<stdio.h>


int main()
{

    int n,sum=0,sq ;

    printf(" \n Input n : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sq = i*i ;
        sum += sq ;
    }

    printf(" \n Sum of the Squares of the first %d Natural numbers is : %d. ",n,sum);

}
