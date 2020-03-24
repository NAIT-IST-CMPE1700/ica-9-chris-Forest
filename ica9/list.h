#pragma once

typedef struct StudentN
{
	char* name;
	int ID;
	float mark;
	struct StudentN* next;
}StudentN;

StudentN* createNode(int ID, float marks, char* name);
StudentN* CreateList(int sise);
void orderIDnode(StudentN* head);
void orderMARKnode(StudentN* head);
void Display(StudentN* head, int searchID, float searchMark);
void menu();
static const char names[10][15] = { "cheeder","plause", "moody", "ayg", "peek", "noot", "bruh", "name", "rust", "pluck" };