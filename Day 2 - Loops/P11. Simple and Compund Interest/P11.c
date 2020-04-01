/* Program to prepare a table showing the amount under simple & compound interest.
   Simple Interest = (principal) * (rate) * (# of periods)

   Compound Interest :
   Amount = P(1 +[(r/4)/100])^4n  For Interest Compounded Quarterly.
*/



#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  float p,r,t,si,i,ci,a; //P:Principal | R:Interest Rate | T:Time | I: Interest Per Year | ci:Compound Interest

  p = 1000000 ;
  r = 0.125 ; //Convert Percentage to Decimals
  t = 10 ;
  n = 4 ;

  si = p*r*t ;
  i = (si-p)/10;
  a = p+si ;

  printf(" \n Principal Amount : %f \n Interest Rate : %f  % \n Time Frame : %f Years \n \n \n Simple Interest : %f \n Interest Per Year : %f \n Total Amount : %f ",p,r*100,t,si,i,a);

  a = (1 + (r/n)) ;

  for( i=1;i<4*t;i++)
    {
      a = a*(1 + (r/n)) ;
    }
  a = p*a ;
  ci = a-p ;

  printf("\n \n \n Compund Interest : %f \n Interest Per Year : %f \n Total Amount : %f ",ci,ci/10,a) ;

}
