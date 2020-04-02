// Program to find the Largest among N Numbers in an Array

#include <stdio.h>


int main()
{

    int arr[50],n,l=0 ; //l:Variable to store the largest number.

    printf(" \n Input Limit (n) : ") ;
    scanf("%d",&n) ;

    for(int i=0 ; i<n ; i++)
    {
        printf(" \n Input No.%d : ",i+1) ;
        scanf("%d",&arr[i]) ;

        if(arr[i]>l)
            l = arr[i] ;
    }

    printf(" \n \n The Largest Number among the input values is : %d \n \n ",l) ;

}

