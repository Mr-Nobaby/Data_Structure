#pragma once
#include <iostream>
#include <vector>


void VectorPrint(const std::vector<int>& vec);
void VectorInfoPrint(const std::vector<int>& vec);
void VectorCapacityCheck(std::vector<int>& vec);


void VectorInsert(std::vector<int>& vec, int pos, int x);
void VectorDelete(std::vector<int>& vec, int pos);
