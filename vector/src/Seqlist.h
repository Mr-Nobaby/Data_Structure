#pragma once
#include <iostream>
#include <assert.h>

#define N 100

typedef struct SeqList
{
	int* a;
	int size;//��ʾ�����д洢�˶�������
	int capacity;//����ʵ�ʿռ�����
}SL;





void SeqListInit(SL& ps);
void SeqlistPrint(SL& ps);



void SeqlistInsert(SL& ps, int pos, int x);
void PushBack(SL& ps, int x);
void SeqlistDelete(SL& ps, int pos);