#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 9;//goes to stack
	int* p = NULL;
	int** p_ptr = &p;
	//c语言实现
	//p = (int*)malloc(sizeof(int));

	//if (p)
	//{
	//	*p = 10;
	//	printf("%d", (*p));
	//	free(p);
	//}

	//c++实现
	p = new int;
	p_ptr = new int*;
	*p = a;
	printf("%d", *p);
	delete p;

	p = new int[20];
	delete[] p;
}

