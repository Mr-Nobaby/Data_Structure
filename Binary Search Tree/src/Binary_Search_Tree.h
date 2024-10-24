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


BstNode* TreeInsert(BstNode*& root, int x);//�ݹ鷽��
BstNode* TreeInsertString(BstNode*& root, char x);

void TreeInsert1(BstNode*& root, int x); //�ǵݹ鷽��

bool IsEmpty(BstNode*& root);
bool NodeSearch(BstNode*& root, int x); 

//�ݹ鷽��
int FindMin(BstNode*& root);
int FindMax(BstNode*& root);
//�ǵݹ鷽��
int FindMin1(BstNode*& root);
int FindMax1(BstNode*& root);

int TreeHeight(BstNode*& root);
void LevelOrder(BstNode*& root);