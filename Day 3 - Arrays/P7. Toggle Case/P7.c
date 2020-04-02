// Program to title case a string

#include <stdio.h>

int main()
{

    char a[50];

    printf(" \n Input the String : ") ;
    scanf("%s",&a) ;

    printf("\n Input String : %s",a);

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&& a[i]<='z')
            a[i] = a[i] - 32 ;
        else if(a[i]>='A'&& a[i]<='Z')
            a[i] = a[i] + 32 ;
    }

    printf("\n String after toggling case : %s",a) ;
}
