#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;
};

BstNode* CreatNewNode(int x);
BstNode* TreeInsert(BstNode*& root, int x);//递归方法
void TreeInsert1(BstNode*& root, int x); //非递归方法

bool IsEmpty(BstNode*& root);
bool NodeSearch(BstNode*& root, int x); 
