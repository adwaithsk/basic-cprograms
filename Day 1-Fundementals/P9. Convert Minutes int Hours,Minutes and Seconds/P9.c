// Program to convert time given in minutes to hours, minutes and seconds.

#include <stdio.h>

int main()
{

    long num,hh,mm,ss,temp ;

    printf(" \n Input the time in minutes : ");
    scanf("%ld",&num);

    hh = num/60 ;
    mm = (num - hh*60)  ;
    ss = (num - hh*60)%60 ;

    printf(" \n %d minutes = %d hours, %d minutes & %d seconds. \n ",num,hh,mm,ss);

}
