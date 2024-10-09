void increment(int* num)
{
	// 通过指针修改传入的变量值
	(*num)++;
}

void increment2(int& num)
{
	// 通过指针修改传入的变量值
	num++;
}