//Program to find NET salary of an Employee
#include <stdio.h>

int main()
{

    char name[25],des[25];
    int bp,hra=500,pf,da,net; //bp : Basic Pay.

    printf("\n Input Name of Employee : ");
    scanf("%s",&name);
    printf("\n Input Designation : ");
    scanf("%s",&des);
    printf("\n Input Basic Pay : ");
    scanf("%d",&bp);

    if(bp<10000)
    {
        da = bp*0.6 ;
        pf = bp*0.15 ;

    }
    else
    {
        da = bp*0.75 ;
        pf = bp*0.2 ;
    }

    net = bp+da+hra-pf ;

    printf(" \n Name : %s \n Designation : %s \n Basic Pay : %d \n D.A : %d \n H.R.A : %d \n P.F : %d \n NET SALARY : %d",name,des,bp,da,hra,pf,net);

}
