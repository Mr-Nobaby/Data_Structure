#include "Linked List.h"



void LinkListInit(Node* list)
{
	list = NULL;
	//Node* temp = (Node*)malloc(sizeof(Node));
	Node* temp = new Node;
	list = temp;

}


void LinklListPrint(Node* list)
{
	Node* temp = list;
	while (temp)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}

	printf("NULL\n");
}

void LinklistInsertBack(Node*& list, int x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;

	if (list)
	{
		Node* temp1 = list;
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
		//while (list->next != NULL)
		//{
		//	list = list->next;
		//}
		//list->next = list;
	}
	else
	{
		list = temp;
	}
}

void LinklistInsertFront(Node*& list, int x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->next = list;
	list = temp;
}

int LinkListSize(Node* list)
{
	int size = 0;
	while (list)
	{
		size++;
		list = list->next;
	}
	printf("size = %d\n", size);
	return size;
}


void LinklistInsert(Node*& list, int pos, int x)
{
	int size = LinkListSize(list);
	assert(pos > 0 && pos <= (size + 1));
	Node* temp1 = new Node;
	temp1->data = x;
	temp1->next = NULL;
	if (pos == 1)
	{
		temp1->next = list;
		list = temp1;
	}
	else if (pos == size + 1)
	{
		Node* tail = list;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = temp1;
	}
	else
	{
		Node* position = list;
		for (int i = 0; i < pos - 2; i++)
		{
			position = position->next;
		}

	}
}
