#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include<string>
#include<stack>

using namespace std;

//��������������׺���ʽ���������
int EvaluatePostfix(string expression);

// ִ�в�������������ĺ�����.
int PerformOperation(char operation, int operand1, int operand2);

//����������֤ĳ���ַ��Ƿ���������š�. 
bool IsOperator(char C);

//����������֤�ַ��Ƿ�Ϊ���� 
bool IsNumericDigit(char C);
