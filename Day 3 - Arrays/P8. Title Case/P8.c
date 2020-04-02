// Program to title case a string

#include <stdio.h>

int main()
{
    int i = 0 ;
    char a[50];

    printf(" \n Input the String : ") ;
    scanf("%[^\n]s",&a) ;

    printf("\n Input String : %s",a);


    for(i=0;a[i]!='\0';i++)
    {
        if(i==0)
        {
            if((a[i]>='a'&& a[i]<='z'))
                a[i] = a[i] - 32 ;
                continue ;
        }


        if(a[i]==' ')
        {
            i++;
            if((a[i]>='a'&& a[i]<='z'))
            a[i] = a[i] - 32 ;
            continue;
        }
        else if((a[i]>='A'&& a[i]<='Z'))
            a[i] = a[i] + 32 ;
    }

    printf("\n String after toggling case : %s",a) ;
}

