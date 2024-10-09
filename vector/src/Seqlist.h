#pragma once
#include <iostream>
#include <assert.h>

#define N 100

typedef struct SeqList
{
	int* a;
	int size;//表示数组中存储了多少数据
	int capacity;//数组实际空间容量
}SL;





void SeqListInit(SL& ps);
void SeqlistPrint(SL& ps);



void SeqlistInsert(SL& ps, int pos, int x);
void PushBack(SL& ps, int x);
void SeqlistDelete(SL& ps, int pos);