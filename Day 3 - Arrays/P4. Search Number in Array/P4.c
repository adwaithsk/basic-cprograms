

// Program to Search for a Number in an Array

#include <stdio.h>


int main()
{

    int n,arr[25],i,s,flag=0 ;

    printf(" \n Input Limit (Max 25) : ") ;
    scanf("%d",&n) ;

    for(i=0 ; i<n; i++)
    {
        printf(" \n Input No.%d : ",i+1) ;
        scanf("%d",&arr[i]) ;
    }

    printf(" \n Input Number to be Searched : ") ;
    scanf("%d",&s) ;


    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            printf("\n The Number is found in the Array at Position : %d \n",i+1) ;
            flag =1 ;
        }

    }

    if(flag == 0)
        {
            printf("\n The Number is NOT FOUND in the Array. \n ") ;
        }

}
