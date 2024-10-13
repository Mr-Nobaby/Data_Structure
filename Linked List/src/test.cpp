#include<stdio.h>
#include<stdlib.h>
#include <iostream>

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

	LinklistInsert(start, 1, 1);
	LinklistInsert(start, 2, 2);
	LinklistInsert(start, 3, 3);
	LinklListPrint(start);

	LinklistInsert(start, 1, 4);
	LinklListPrint(start);
	LinkListSize(start);
}

void test4()
{
	Node* start = NULL;

	LinklistInsert(start, 1, 1);
	LinklistInsert(start, 2, 2);
	LinklistInsert(start, 3, 3);
	LinklListPrint(start);

	LinklistInsert(start, 1, 4);
	LinklistInsert(start, 2, 5);
	LinklListPrint(start);

	LinklsitDelete(start, 2);
	LinklListPrint(start);

	LinklsitDelete(start, 4);
	LinklListPrint(start);

	LinklsitDelete(start, 1);
	LinklListPrint(start);

	LinklsitDelete(start, 3);
}

void test5()
{
	Node* start = NULL;

	LinklistInsert(start, 1, 1);
	LinklistInsert(start, 2, 2);
	LinklistInsert(start, 3, 3);
	LinklistInsert(start, 1, 4);
	LinklistInsert(start, 2, 5);
	LinklListPrint(start);

	LinklistReverse(start);
	LinklListPrint(start);
}

void test6()
{
	Node* start = NULL;

	LinklistInsert(start, 1, 1);
	LinklistInsert(start, 2, 2);
	LinklistInsert(start, 3, 3);
	LinklistInsert(start, 4, 4);
	LinklistInsert(start, 5, 5);
	LinklListPrint2(start);
	LinklListReversePrint2(start);
}
int main()
{
	//test2();
	//test4();
	//test5();
	test6();

}

