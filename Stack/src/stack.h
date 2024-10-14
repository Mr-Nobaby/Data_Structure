#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>

struct Node
{
	int data;
	Node* next;
};

void Push(Node*& top, int x);
void Pop(Node*& top);
void Print(Node*& top);


void Reverse(char c[]);
