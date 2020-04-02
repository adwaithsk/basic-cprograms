// Program to find the Sum of 10 Numbers in an Array

#include <stdio.h>


int main()
{

    int arr[10],sum=0 ; //l:Variable to store the largest number.

    for(int i=0 ; i<10 ; i++)
    {
        printf(" \n Input No.%d : ",i+1) ;
        scanf("%d",&arr[i]) ;

        sum += arr[i] ;
    }

    printf(" \n \n The Sum of the input values is : %d \n \n ",sum) ;

}


