// Program to create a marklist and find out their total marks ,percentage and result.


# include<stdio.h>

int main()

{
    char name[25];
    int m[5],total=0;
    float percentage;

     printf("\n Enter the Name of Student : ");
     scanf("%s",&name);

    for(int i=0;i<6;i++)
    {

     printf("\n Enter the marks obtained for subject %d : ",i+1) ;
	 scanf("%d",&m[i]);

	 total = total + m[i];
    }

    for(int i=0;i<6;i++)
    {

     printf("%d , ",m[i]) ;

    }

	percentage = total/6 ;

	printf("\n \n Name : %s . \n Mark 1 : %d \n Mark 2 : %d \n Mark 3 : %d \n Mark 4: %d \n Mark 5 : %d \n Mark 6 : %d \n Total Marks : %d \n Percentage : %f % \n \n RESULT : ",name,m[0],m[1],m[2],m[3],m[4],m[5],total,percentage);

	if (percentage>80)
        printf("PASS with A Grade.");
    else if (percentage>70)
        printf("PASS with B Grade.");
    else if (percentage>60)
        printf("PASS with C Grade.");
    else if (percentage>45)
        printf("Just PASS.");
    else
        printf("FAILED.");

}
