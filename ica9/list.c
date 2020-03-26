#include "list.h"
#include <stdio.h>
#include <stdlib.h>


StudentN* createNode(int ID, float marks, char* name)
{
	StudentN* newNode = (StudentN*)malloc(sizeof(StudentN));
	newNode->name = name;
	newNode->ID = ID;
	newNode->mark = marks;
	newNode->next = NULL;
	return newNode;
}

// this will create a list of values with and id number, grde and name 
StudentN* CreateList(int sise,char** names)
{
	srand(time(NULL));
	int rdmNum = rand() % 100 + 1;
	int idNum = rand() % 1000 + 1;
	
	StudentN* start = createNode(idNum, rdmNum, names[0]);
	StudentN* current = start;

	for (int i = 1; i < sise; i++)
	{
		rdmNum = rand() % 100 + 1;
		int idNum = rand() % 1000 + 1;
		current->next = createNode(idNum, rdmNum, names[i]);
		current = current->next;
	}
	return start;
}

// 1) disply in oredre from id #
void orderIDnode(StudentN* head)
{
	StudentN* curnt = head;
	StudentN* temp;

	while (curnt!=NULL)
	{
		temp = curnt->next != NULL ? curnt->next : NULL;
		while (temp != NULL)
		{
			if (curnt->ID > temp->ID)
			{
				StudentN tempData = { curnt->name,curnt->ID,curnt->mark };
				curnt->ID = temp->ID; curnt->mark = temp->mark; curnt->name = temp->name;
				temp->ID = tempData.ID; temp->mark = tempData.mark; temp->name = tempData.name;
			}
			temp = temp->next;
		}
		curnt = curnt->next;
	}
}

// 2) display order with marks
void orderMARKnode(StudentN* head)
{
	StudentN* curnt = head;
	StudentN* temp;

	while (curnt != NULL)
	{
		temp = curnt->next != NULL ? curnt->next : NULL;
		while (temp != NULL)
		{
			if (curnt->mark < temp->mark)
			{
				StudentN tempData = { curnt->name,curnt->ID,curnt->mark };
				curnt->ID = temp->ID; curnt->mark = temp->mark; curnt->name = temp->name;
				temp->ID = tempData.ID; temp->mark = tempData.mark; temp->name = tempData.name;
			}
			temp = temp->next;
		}
		curnt = curnt->next;
	}
}

void Display(StudentN* display, int searchID, float searchMark)
{
	StudentN* current = display;

	while (current != NULL)
	{
		if (current->ID != searchID && searchID != NULL)
		{
			current = current->next;
			continue;
		}
		if (current->mark < searchMark && searchMark >= 0)
		{
			current = current->next;
			continue;
		}
		printf("\nID: %i", current->ID);
		printf("\nName: %s",current->name); //printf(current->name);
		printf("\nMark: %.1f", current->mark);
		current = current->next;
	}
}

void menu()
{
	printf("\n\nPress 1 to display in order of ID Number\n");
	printf("Press 2 to display based on student grade\n");
	printf("Press 3 to display info of all students\n");
	printf("Press 4 to display all students who have passed\n");
	printf("Press 5 to exit \n\n");
	printf("Enter your choice: ");
}
//string array(2D-array of chars) for 10 names
// int array for 10 id numbers reping names from sring array
// araay for marks 10 in size reping names from sring array
// bulid link list of struct in list.h id in asending order
// another list in desending order of marks

// continually dis play a menu (user input) with following options
// 1) disply in oredre from id #
// 2) display desendig order with marcks
// 3) display names, mark and rank of student (id#) 
// 4) disply name(s) of students above a passing value(50%)
// 5) exit