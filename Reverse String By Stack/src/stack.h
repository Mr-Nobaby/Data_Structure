#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include <stack>
class Stack
{
private:
	char A[100];
	int top;
public:
	void Push(int x);
	void Pop();
	int Top();
	bool IsEmpty();
};

void Reverse(char C[], int n);
