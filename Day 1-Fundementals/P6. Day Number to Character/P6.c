//Program to print Day according to Day number.

# include <stdio.h>
# include <string.h>

int main()
{
    int n ;
    char day[10];
    printf(" \n Input the Day Number (0-6) : ") ;
    scanf("%d",&n) ;

     switch(n)
     {
     case 0 :
        strncpy(day,"Sunday",10);
        break;
     case 1 :
        strncpy(day,"Monday",10);
        break ;
     case 2 :
        strncpy(day,"Tuesday",10);
        break;
     case 3 :
        strncpy(day,"Wednesday",10);
        break ;
     case 4 :
        strncpy(day,"Thursday",10);
        break;
     case 5 :
        strncpy(day,"Friday",10);
        break ;
     case 6 :
        strncpy(day,"Saturday",10);
        break;
     default :
        printf("Invalid Day Number Input");

     }

     printf(" \n Day %d of the week is : %s ",n,day);
}
