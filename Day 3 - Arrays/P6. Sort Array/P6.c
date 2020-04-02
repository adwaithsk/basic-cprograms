
// Program to Sort an Array

#include <stdio.h>


int main()
{

    int n,arr[25],temp,i,j ;

    printf(" \n Input Limit (Max 25) : ") ;
    scanf("%d",&n) ;

    for(i=0 ; i<n; i++)
    {
        printf(" \n Input No.%d : ",i+1) ;
        scanf("%d",&arr[i]) ;
    }

    printf(" \n \n INPUT Values : ") ;

    for(i=0;i<n;i++)
        printf("%d ",arr[i]) ;

   for(i=0;i<n;i++)
    {


        for(j=i+1;j<n;j++)
        {
            if (arr[i] > arr[j])
                {
                    temp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
        }

    }

    printf(" \n \n ASCENDING ORDER : ") ;

     for(i=0;i<n;i++)
        printf("%d ",arr[i]) ;

    printf(" \n \n DESCENDING ORDER : ") ;

     for(i=n-1;i>=0;i--)
        printf("%d ",arr[i]) ;

    printf(" \n \n ") ;

}


