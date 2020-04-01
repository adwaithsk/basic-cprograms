// Program to Generate Pythagorean Triplets like (x,y,z) where x2+y2 = z2

#include <stdio.h>

int main()
{

    int x,y,z ;

    printf(" \n Pythagorean triplets like (x,y,z) where x2+y2 = z2 from values 1-100 is :") ;

    for(x=1;x<100;x++)
        for(y=1;y<100;y++)
            for(z=1;z<100;z++)
                if((x*x)+(y*y)==(z*z))
                       printf("(%d,%d,%d) , ",x,y,z) ;


}
