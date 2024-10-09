#include "Seqlist.h"
#include "vector.h"

void test1()
{
	SL ps;
	SeqListInit(ps);
	PushBack(ps, 3);
	PushBack(ps, 1);
	PushBack(ps, 1);
	PushBack(ps, 1);
	PushBack(ps, 9);

	SeqlistPrint(ps);
	free(ps.a);
}
void test2()
{
	test1();
	SL ps1;

	SeqListInit(ps1);
	PushBack(ps1, 3);
	PushBack(ps1, 1);
	PushBack(ps1, 1);
	PushBack(ps1, 1);

	SeqlistPrint(ps1);
	free(ps1.a);

}

void test3()
{
	SL ps;
	SeqListInit(ps);
	SeqlistInsert(ps, 0,0);
	SeqlistInsert(ps, 1,1);
	SeqlistInsert(ps, 2,2);
	SeqlistInsert(ps, 3,3);
	SeqlistInsert(ps, 4,4);

	//SeqlistInsert(ps, 7, 7);

	SeqlistPrint(ps);
	free(ps.a);

}

void test4()
{
	SL ps;
	SeqListInit(ps);
	SeqlistInsert(ps, 0, 0);
	SeqlistInsert(ps, 1, 1);
	SeqlistInsert(ps, 2, 2);
	SeqlistInsert(ps, 3, 3);
	SeqlistInsert(ps, 4, 4);
	SeqlistPrint(ps);

	SeqlistDelete(ps, 1);
	SeqlistPrint(ps);

	free(ps.a);
}
void increment(int* num);
void increment2(int& num);
void TestRefAndPtr()
{
	int a = 9;
	increment(&a);
	printf("%d\n", a);

	increment2(a);
	printf("%d\n", a);
}



//vector µœ÷
int main()
{
	//test4();
	std::vector<int> vec{ 0,1,2,3,4 };  
	VectorPrint(vec);
	VectorInfoPrint(vec);

	VectorInsert(vec, 3, 9);
	VectorPrint(vec);
	VectorInfoPrint(vec);

	VectorDelete(vec, 5);
	VectorPrint(vec);
	VectorInfoPrint(vec);
}

