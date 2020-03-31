//Program to calculate sales commission

# include <stdio.h>

int main()
{
   int com[15],s[15],total; // s: sales of 15 individual members

   for(int i=0;i<15;i++)
   {
       printf(" \n Input Total Sales of Employee %d : ",i+1);
       scanf("%d",&s[i]);

        if(s[i]>=30000)
            com[i] = (s[i]*0.25) + 1000 ;
        else if(s[i]>=10000)
            com[i] = s[i]*0.15 ;
        else
            com[i] = 0 ;
   }

   for(int i=0;i<15;i++)
   {
       printf(" \n Total Sales for Employee %d : %d \n Commission Granted : %d \n ----------- \n",i+1,s[i],com[i]);
   }

}
