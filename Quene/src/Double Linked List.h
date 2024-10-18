#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Node
{
	int data;
	Node* next;
	Node* prev;
};



void DBListPrint(Node* list);
void DBListReversePrint(Node* list);
int DBListSize(Node* list);

Node* CreatListNode(int x);
void DBListInsertFront(Node*& list, int x);
void DBListInsertBack(Node*& list, int x);

