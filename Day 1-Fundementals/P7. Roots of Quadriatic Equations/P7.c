// Program to find the roots of a Quadriatic equation

# include <stdio.h>
#include <math.h>

int main()
{

    int a,b,c,disc,s1,s2,sdisc; //disc : Discriminant | s1,s2 : Solutions. | sdisc : Square Root of disc

    printf(" \n Genral Formula of a Quadriatic Equation : aX^2 + bX + c = 0. \n Input Co-Efficient of X^2 : ");
    scanf("%d",&a);
    printf(" \n Input Co-Efficient of X : ");
    scanf("%d",&b);
    printf(" \n Input Constant : ");
    scanf("%d",&c);

    disc = b*b - 4*a*c ;
    sdisc= sqrt(disc);

     if(disc>0) //Equation has two solutions
     {
         s1 = (-b + sdisc)/2*a ;
         s2 = (-b - sdisc)/2*a ;
         printf(" \n Roots of the Quadriatic Eqaution %dX^2 + %dX + %d = 0 is %d & %d.",a,b,c,s1,s2);
     }
     else if(disc==0) //Equation has one real solution
     {
         s1 = -b/2*a ;
         printf(" \n Root of the Quadriatic Eqaution %dX^2 + %dX + %d = 0 is %d.",a,b,c,s1);
     }
    else
        printf(" \n The given Quadriatic Equation has no Real solutions. ");
}
