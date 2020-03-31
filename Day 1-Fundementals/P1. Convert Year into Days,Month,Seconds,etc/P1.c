//Program to convert Years into Minutes,Hours,Days,Month and Seconds
# include<stdio.h>

int main()

{

	int y,option;
	long int val;

	printf("\n Enter no of years to be converted : ") ;
	scanf("%d", & y) ;

	printf("\n \n Select option to convert value into :\n \t (1) Minutes \n \t (2) Hours \n \t (3) Days \n \t (4) Month \n \t (5) Seconds \n \n :  ") ;
	scanf("%d", & option);

	switch(option)

	{
		case 1 :
		      val = y*365*24*60;
			  printf("%d years = %ld minutes.",y,val) ;
			  break;

		case 2 :
		      val = y*365*24 ;
			  printf("%d years = %ld hours.",y,val) ;
			  break;

		case 3 :
		      val = y*365 ;
			  printf("%d years = %ld days",y,val);
			  break;

		case 4 :
		      val = y*12 ;
			  printf("%d years = %ld months.",y,val) ;
			  break;

		case 5 :  val = y*365*24*60*60;
			  printf("%d years = %ld seconds.",y,val) ;
			  break;

		default : printf("\n Invalid option has been chosen. Retry");

	}

}

