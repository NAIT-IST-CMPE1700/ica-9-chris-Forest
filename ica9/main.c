#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	StudentN* start= CreateList(10);
	Display(start, NULL, 0);
	printf("\n*****************\n");
	orderIDnode(start);
	Display(start, NULL, 0);
	printf("\n*****************\n");
	orderMARKnode(start);
	Display(start, NULL, 0);
	printf("\n*****************\n");
	Display(start, NULL, 50);// marks ovr 50%

	menu();

	int choice;
	choice = scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("\n*****************\n");
		orderIDnode(start);
		Display(start, NULL, 0);
		printf("\n*****************\n");
		return main();
		break;
	case 2:
		printf("\n*****************\n");
		orderMARKnode(start);
		Display(start, NULL, 0);
		printf("\n*****************\n");
		return main();
		break;
	case 3:
		printf("\n*****************\n");
		Display(start, NULL, 0);
		printf("\n*****************\n");
		return main();
		break;
	case 4:
		printf("\n*****************\n");
		Display(start, NULL, 50);
		printf("\n*****************\n");
		return main();
		break;
	case 5:
		exit(EXIT_SUCCESS);
		break;
	default:
		printf("wrong Input\n");
		return main();
		break;
	}
	
	/*do
	{
		menu();
		switch (choice)
		{
		case 1:
			orderIDnode(start);
			Display(start, NULL, 0);
			break;
		case 2:
			orderMARKnode(start);
			Display(start, NULL, 0);
			break;
		case 3:
			Display(start, NULL, 0);
			break;
		case 4:
			Display(start, NULL, 50);
			break;
		case 5:
			exit(5);
			break;
		default:
			printf("wrong Input\n");
			break;
			return 0;
		}

	} while (choice != 5);
	return 0;*/

	/*int input()
	{
		int number;
		scanf_s("%d", &number);
		return (number);
	}*/

// continually dis play a menu (user input) with following options
// 1) disply in oredre from id #
// 2) display desendig order with marcks
// 3) display names, mark and rank of student (id#) 
// 4) disply name(s) of students above a passing value(50%)
// 5) exit
}