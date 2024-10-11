#include<stdio.h>
#include<stdlib.h>
#include "Linked List.h"

void test1()
{
	Node* start = NULL;
	LinklistInsertBack(start, 5);
	LinklListPrint(start);

	LinklistInsertBack(start, 4);
	LinklListPrint(start);

	LinklistInsertBack(start, 3);
	LinklListPrint(start);
}
void test2()
{
	Node* start = NULL;
	LinklistInsertFront(start, 5);
	LinklListPrint(start);
	LinkListSize(start);

	LinklistInsertFront(start, 4);
	LinklListPrint(start);
	LinkListSize(start);

	LinklistInsertFront(start, 3);
	LinklListPrint(start);
	LinkListSize(start);

	LinklistInsert(start, -1, 2);
}

void test3()
{
	Node* start = NULL;

	LinklistInsert(start, 1, 2);
}
int main()
{
	//test2();
	test3();


}

