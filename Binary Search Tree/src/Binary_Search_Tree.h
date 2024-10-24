#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <algorithm> 
#include <queue>
#include <iostream>

struct BstNode
{
	int data;
	char character;
	BstNode* left;
	BstNode* right;
};

BstNode* CreatNewNode(int x);
BstNode* CreatNewNodeString(char x);


BstNode* TreeInsert(BstNode*& root, int x);//递归方法
BstNode* TreeInsertString(BstNode*& root, char x);

void TreeInsert1(BstNode*& root, int x); //非递归方法

bool IsEmpty(BstNode*& root);
bool NodeSearch(BstNode*& root, int x); 

//递归方法
int FindMin(BstNode*& root);
int FindMax(BstNode*& root);
//非递归方法
int FindMin1(BstNode*& root);
int FindMax1(BstNode*& root);

int TreeHeight(BstNode*& root);
void LevelOrder(BstNode*& root);