#include "stack.h"

#define MAX_SIZE 4
int A[MAX_SIZE];
int top = -1;
bool IsEmpty()
{
	//if (-1 == top)
	//{
	//	return true;
	//}
	//else
	//{
	//	return false;
	//}
	return top == -1;
}

void Push(int x)
{
	assert(top >= -1 && top < MAX_SIZE);
	//top++;
	A[++top] = x;
}

void Pop()
{
	assert(!IsEmpty());
	top -= 1;
}

void Print()
{
	printf("stack:");
	for (int i = 0; i <= top; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

int Top()
{
	return A[top];
}
//int main()
//{
//	Push(1);
//	Push(2);
//	Push(3);
//	Print();
//
//	Pop();
//	Print();
//	Pop();
//	Pop();
//	Pop();
//
//}
