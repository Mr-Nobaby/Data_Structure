#include "Seqlist.h"

void SeqListInit(SL& ps)
{
	ps.a = NULL;
	ps.size = ps.capacity = 0;
}

void PushBack(SL& ps, int x)
{
	if (ps.size == ps.capacity)
	{
		if (0 == ps.capacity)
		{
			ps.capacity = 4;
			int* tmp = (int*)malloc(ps.capacity * sizeof(int));

			assert(tmp);
			ps.a = tmp;
		}
		else
		{
			int newcapacity = ps.capacity * 2;
			int* tmp = (int*)realloc(ps.a, newcapacity * sizeof(int));

			assert(tmp);
			ps.a = tmp;
			ps.capacity = newcapacity;
		}
	}
	ps.a[ps.size] = x;
	ps.size++;
}

void SeqlistPrint(SL& ps)
{
	for (int i = 0; i < ps.size; i++)
	{
		printf("%d ", ps.a[i]);
	}
	printf("\n");
}

void SeqlistCheakCapacity(SL& ps)
{
	if (ps.size == ps.capacity)
	{
		if (0 == ps.capacity)
		{
			ps.capacity = 4;
			int* tmp = (int*)malloc(ps.capacity * sizeof(int));

			assert(tmp);
			ps.a = tmp;
		}
		else
		{
			int newcapacity = ps.capacity * 2;
			int* tmp = (int*)realloc(ps.a, newcapacity * sizeof(int));

			assert(tmp);
			ps.a = tmp;
			ps.capacity = newcapacity;
		}
	}
}


void SeqlistInsert(SL& ps, int pos, int x)
{
	assert(pos >= 0 && ps.size >= pos);
	SeqlistCheakCapacity(ps);
	int end = ps.size - 1;
	while (end >= pos)
	{
		ps.a[end + 1] = ps.a[end];
		end--;
	}
	ps.a[pos] = x;
	ps.size++;
}

void SeqlistDelete(SL& ps, int pos)
{
	assert(pos >= 0 && pos <= ps.size);
	int end = ps.size - 1;
	int start = 0;
	//while ((start >= pos) && (start <= end))
	//{
	//	ps.a[pos] = ps.a[pos + 1];
	//	start++;
	//}
	while (pos <= end)
	{
		ps.a[pos] = ps.a[pos + 1];
		pos++;
	}
	ps.size--;
}