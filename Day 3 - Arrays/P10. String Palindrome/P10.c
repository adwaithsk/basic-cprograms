// Program to check if a string is a palindrome or not.

#include <stdio.h>

int main()

{
    int len,flag=0 ;
    char str[50] ;

    printf("\n Input String : ") ;
    scanf("%s",&str) ;

    for(len=0;str[len]!='\0';len++);


    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] != str[len-1-i])
        {
            flag = 1 ;
            break ;
        }
    }
    if (flag == 0)
        printf("\n '%s' IS a Palindrome.",str) ;
    else
        printf("\n '%s' is NOT a Palindrome.",str) ;

}
