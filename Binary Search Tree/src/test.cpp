#include<stdio.h>
#include<stdlib.h>
#include <iostream>

#include "Binary_Search_Tree.h"
void test1()
{
	BstNode* root = NULL;
	root = TreeInsert(root, 3);
	root = TreeInsert(root, 5);
	root = TreeInsert(root, 1);
	root = TreeInsert(root, 6);
	root = TreeInsert(root, -4);
	root = TreeInsert(root, 4);
	root = TreeInsert(root, 7);

	printf("%d\n", NodeSearch(root, 1));
	printf("%d\n", NodeSearch(root, -1));

}
void test2()
{
	BstNode* root = NULL;
	TreeInsert1(root, 3);
	TreeInsert1(root, 5);
	TreeInsert1(root, 1);
	TreeInsert1(root, 6);
	TreeInsert1(root, -4);
	TreeInsert1(root, 4);
	TreeInsert1(root, 7);
	TreeInsert1(root, 10);

	printf("%d\n", NodeSearch(root, 1));
	printf("%d\n", NodeSearch(root, -1));
}

void test3()
{
	
}

void test4()
{
	
}

void test5()
{
}

void test6()
{

}
int main()
{
	//test1();
	test2();
}
