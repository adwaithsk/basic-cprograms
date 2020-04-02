
// Program to find the Sum of 10 Numbers in an Array

#include <stdio.h>


int main()
{

    int arr[25],odd[25],even[25],i,oc=0,ec=0,n ; //oc : odd counter ec : even counter

    printf(" \n Input Limit (Max 25) : ") ;
    scanf("%d",&n) ;

    for(i=0 ; i<n; i++)
    {
        printf(" \n Input No.%d : ",i+1) ;
        scanf("%d",&arr[i]) ;

    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[ec] = arr[i] ;
            ec++ ;
        }
        else
        {
            odd[oc] = arr[i] ;
            oc++ ;
        }
    }

    printf(" \n \n INPUT Values : ") ;

    for(i=0;i<n;i++)
        printf("%d ",arr[i]) ;

    printf(" \n \n ODD Numbers : ") ;

    for(i=0;i<oc;i++)
        printf("%d ",odd[i]) ;

    printf(" \n \n EVEN Numbers : ") ;

    for(i=0;i<ec;i++)
        printf("%d ",even[i]) ;

    printf(" \n ") ;

}
