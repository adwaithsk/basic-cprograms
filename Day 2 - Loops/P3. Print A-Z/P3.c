// Program to print characters a to z one on each line.

#include<stdio.h>

int main()
{
  char c = 'A';

  printf(" \n Characters of the Alphabet : \n ");

  for(int i=0;i<26;i++)
  {
      printf(" \n %c",c);
      c++ ;
  }

}
