#include <stdio.h>
main ()
{
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	switch(x)
	{
		case 1: 
		{
			printf("Food item-Sandwich\n");
			printf("Price-Rs.149\n");
		}
		break;
		case 2: 
		{
			printf("Food item-Pasta\n");
		    printf("Price-Rs.179\n");
		}
		break;
		case 3:
		{
		    printf("Food item-French Fries\n");
		    printf("Price-Rs.99\n");
		}
		break;
		case 4:
		{
			printf("Food item-Pizza\n");
		    printf("Price-Rs.239\n");
		}
		break;
		case 5:
		{
			printf("Food item-Burger\n");
		    printf("Price-Rs.129\n");
		}
		break;
		default:
		{
			printf("Enter a number between 1-5\n");
		}
	}
	printf("Enjoy your meal\n");
}
