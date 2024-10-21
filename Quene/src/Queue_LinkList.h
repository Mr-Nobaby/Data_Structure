#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Node
{
	int data;
	Node* next;
};

extern Node* front;
extern Node* rear;

void Push(int x);
void Pop();
bool IsEmpty();

void Print();

