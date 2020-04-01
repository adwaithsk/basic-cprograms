//To print all odd numbers between 200 and 6 using while loop

#include <stdio.h>

int main()
{
    int i = 200 ;

    printf(" \n All the ODD Numbers Between 200 & 6 are : \n \n  ") ;

    while(i>6)
    {
        if(i%2!=0)
            printf(" %d ",i);

        i--;
    }
}

