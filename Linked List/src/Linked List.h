#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Node
{
	int data;
	Node* next;
};


void LinkListInit(Node* list);
void LinklListPrint(Node* list);
int LinkListSize(Node* list);



void LinklistInsertBack(Node*& list, int x);
void LinklistInsertFront(Node*& list, int x);
void LinklistInsert(Node*& list, int pos, int x);
void LinklsitDelete(Node*& list, int pos);
Node* LinklistReverse(Node*& list);
Node* LinklistReverse2(Node * &list);


//µ›πÈ µœ÷
void LinklListPrint2(Node* list);
void LinklListReversePrint2(Node* list);