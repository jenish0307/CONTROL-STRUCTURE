#include<stdio.h>
main()
{
	int a,b,c;
	printf("press 1\n");	
	printf("press 2\n");	
	printf("press 3\n");	
	printf("press 4\n");
	printf("press 5\n");	
	printf("press 6\n");	
	printf("press 7\n");	
	printf("press 8\n");
	printf("press 9\n");	
	printf("press 10\n");	
	printf("press 11\n");	
	printf("press 12\n");
	
	
	
	printf("enter your choise = ");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1 :printf("january");
		break;
		case 2 :printf("February");
		break;
		case 3 :printf("March");
		break;
		case 4 :printf("April");
		break;
		case 5 :printf("May");
		break;
		case 6 :printf("June");
		break;
		case 7 :printf("July");
		break;
		case 8 :printf("August");
		break;
		case 9 :printf("September");
		break;
		case 10 :printf("October");
		break;
		case 11 :printf("November");
		break;
		case 12 :printf("December");
		break;
		default:
				printf("your choice is note valid !");
	}
}