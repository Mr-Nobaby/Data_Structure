#include "vector.h"
#include <cassert> 
void VectorPrint(const std::vector<int>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		printf("%d ", vec[i]);
	}
	printf("\n");
}

void VectorInsert(std::vector<int>& vec, int pos, int x)
{
	VectorCapacityCheck(vec);
	assert(pos >= 0 && pos <= (int)vec.capacity() && "Insert pos is vaild");
	vec.insert(vec.begin() + pos, x);
}

void VectorDelete(std::vector<int>& vec, int pos)
{
	assert((pos >= 0) && (pos <= (int)vec.size()) && ("Delete pos is vaild"));
	vec.erase(vec.begin() + pos);
}

void VectorCapacityCheck(std::vector<int>& vec)
{
	if ((vec.size()) == (vec.capacity()))
	{
		vec.reserve(vec.size() * 2);
	}
}

void VectorInfoPrint(const std::vector<int>& vec)
{
	std::cout << "size:" << vec.size() << "   capacity" << vec.capacity() << std::endl;
}
