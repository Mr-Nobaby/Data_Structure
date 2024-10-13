#include<stdio.h>
#include<stdlib.h>
#include <iostream>

#include "Double Linked List.h"
void test1()
{
	Node* start = NULL;

}

int main()
{
	Node* phead = NULL;
	DBListInsertFront(phead, 4);
	DBListInsertFront(phead, 3);
	DBListInsertFront(phead, 2);
	DBListPrint(phead);
	DBListReversePrint(phead);

	DBListInsertBack(phead, 5);
	DBListInsertBack(phead, 6);
	DBListPrint(phead);

}

