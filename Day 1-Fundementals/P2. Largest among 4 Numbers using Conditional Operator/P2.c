
//Program to convert Years into Minutes,Hours,Days,Month and Seconds
# include<stdio.h>

int main()

{

	int n1,n2,n3,n4,large;


	printf("\n Enter the four numbers to compare: ") ;
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4) ;

	large = (n1>n2 && n1>n3 && n1>n4)? n1 :(n2>n3 && n2>n4)? n2 : (n3>n4)? n3 : n4 ;

    printf("%d is the greatest among %d, %d, %d & %d",large,n1,n2,n3,n4);

}

