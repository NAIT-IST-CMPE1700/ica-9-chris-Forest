#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	StudentN* start= CreateList(10);

	char choice = '0';

	while (choice != '5')
	{
		choice='0';
		menu();
		printf("\n");
		scanf_s("%c", &choice,sizeof(char));
		printf("\n");

		switch (choice)
		{
		case '1':
			printf("\n*****************\n");
			orderIDnode(start);
			Display(start, NULL, 0);
			printf("\n*****************\n");
			break;
		case '2':
			printf("\n*****************\n");
			orderMARKnode(start);
			Display(start, NULL, 0);
			printf("\n*****************\n");
			break;
		case '3':
			printf("\n*****************\n");
			Display(start, NULL, 0);
			printf("\n*****************\n");
			break;
		case '4':
			printf("\n*****************\n");
			Display(start, NULL, 50);
			printf("\n*****************\n");
			break;
		case '5':
			break;
		default:
			printf("wrong Input\n");
			break;
			
		}
		getchar();
	}
	exit(EXIT_SUCCESS);
	
	
}