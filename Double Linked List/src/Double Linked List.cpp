#include "Double Linked List.h"

Node* CreatListNode(int x)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

int DBListSize(Node* list)
{
	int size = 0;
	while (list)
	{
		size++;
		list = list->next;
	}
	//printf("size = %d\n", size);
	return size;
}

void DBListPrint(Node* list)
{
	Node* temp = list;
	int size = DBListSize(list);
	printf("Forward:");
	while (temp)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL");
	printf("	size=%d\n", size);
}

void DBListReversePrint(Node* list)
{
	Node* temp = list;
	while (temp->next)
	{
		temp = temp->next;
	}
	//Node* tail = temp;
	printf("Backward:");
	while (temp)
	{
		printf("%d->", temp->data);
		temp = temp->prev;
	}
	printf("NULL\n");
}

void DBListInsertFront(Node*& list, int x)
{
	Node* temp = CreatListNode(x);
	if (!list )
	{
		list = temp;
	}
	else
	{
		temp->next = list;
		list->prev = temp;
		list = temp;
	}
}

void DBListInsertBack(Node*& list, int x)
{
	Node* temp = CreatListNode(x);
	Node* tail = list;
	if (!list)
	{
		list = temp;
	}
	else
	{
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = temp;
		temp->prev = tail;
	}
}
