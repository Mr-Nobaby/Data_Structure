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
	int size = LinkListSize(list);

	while (temp)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL");
	printf("	size=%d\n", size);
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
	//printf("size = %d\n", size);
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
		LinklistInsertFront(list, x);
	}
	//else if (pos == size + 1)
	//{
	//	LinklistInsertBack(list, x);
	//}
	else
	{
		Node* position = list;
		for (int i = 0; i < pos - 2; i++)
		{
			position = position->next;
		}
		temp1->next = position->next;
		position->next = temp1;
	}
}

void LinklsitDelete(Node*& list, int pos)
{
	int size = LinkListSize(list);
	assert(pos > 0 && pos <= size);
	Node* position = list;

	if (pos == 1)
	{
		list = position->next;
		free(position);
	}
	else if (pos == size)
	{
		for (int i = 0; i < pos - 2; i++)
		{
			position = position->next;
		}
		position->next = NULL;
		//free(position);
	}
	else
	{
		for (int i = 0; i < pos - 2; i++)
		{
			position = position->next;
		}
		Node* temp1 = position->next;

		position->next = temp1->next;
		free(temp1);
	}
}
//迭代实现
Node* LinklistReverse(Node*& list)
{
	Node* current = list;
	Node* prev = NULL;
	Node* next = list->next;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	list = prev;
	return list;
}
//递归实现
Node* LinklistReverse2(Node*& list)
{
	return NULL;
}

void LinklListPrint2(Node* list)
{
	//while (list->next != NULL)
	//{
	//	printf("%d->", list->data);
	//	LinklListPrint2(list->next);
	//}
	//printf("NULL\n");
	if (list == NULL)
	{
		printf("NULL\n");
		return;
	}
	printf("%d->", list->data);
	LinklListPrint2(list->next);
}

void LinklListReversePrint2(Node* list)
{
	if (list == NULL)
	{
		printf("NULL\n");
		return;
	}
	LinklListReversePrint2(list->next);
	printf("%d->", list->data);
}