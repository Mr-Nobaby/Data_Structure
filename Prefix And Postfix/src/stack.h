#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include<string>
#include<stack>

using namespace std;

//函数用于评估后缀表达式并返回输出
int EvaluatePostfix(string expression);

// 执行操作并返回输出的函数。.
int PerformOperation(char operation, int operand1, int operand2);

//函数用于验证某个字符是否是运算符号。. 
bool IsOperator(char C);

//函数用于验证字符是否为数字 
bool IsNumericDigit(char C);
