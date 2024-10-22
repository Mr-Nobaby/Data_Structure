#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <algorithm> 
struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;
};

BstNode* CreatNewNode(int x);
BstNode* TreeInsert(BstNode*& root, int x);//�ݹ鷽��
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
