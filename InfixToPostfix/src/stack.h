#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include<string>
#include<stack>

using namespace std;

//将中缀表达式转换为后缀表达式的函数
string InfixToPostfix(string expression);

//函数用于验证某个运算符是否比其他运算符具有更高的优先级
int HasHigherPrecedence(char operator1, char operator2);

//函数用于验证某个字符是否是运算符号 
bool IsOperator(char C);

//函数用于验证字符是否是字母数字字符（字母或数字）
bool IsOperand(char C);

// 返回操作符的优先级（即权重）。权重越大，优先级越高
int GetOperatorWeight(char op);
