//To print all odd numbers between 200 and 6 using for loop

#include <stdio.h>

int main()
{
    printf(" \n All the ODD Numbers Between 200 & 6 are : \n \n  ") ;
    for(int i=200;i>6;i--)
    {
        if(i%2!=0)
            printf(" %d ",i);
    }
}
