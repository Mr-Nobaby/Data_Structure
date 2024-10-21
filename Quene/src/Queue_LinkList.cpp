#include "Queue_LinkList.h"

Node* front = NULL;
Node* rear = NULL;

void Push(int x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	if (IsEmpty())
	{
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}
void Pop()
{
	assert(front !=NULL);
	Node* temp = front;
	if (front == rear)
	{
		front = rear = NULL;
	}
	else
	{
		front = front->next;
	}
	delete temp;
}
bool IsEmpty()
{
	if (NULL == front && NULL == rear)
	{
		return true;
	}
	return false;
}

void Print()
{
	assert(!IsEmpty());
	Node* temp = front;
	while (temp)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("\n");
}