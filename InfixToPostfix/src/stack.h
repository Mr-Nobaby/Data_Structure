#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include<string>
#include<stack>

using namespace std;

//����׺���ʽת��Ϊ��׺���ʽ�ĺ���
string InfixToPostfix(string expression);

//����������֤ĳ��������Ƿ��������������и��ߵ����ȼ�
int HasHigherPrecedence(char operator1, char operator2);

//����������֤ĳ���ַ��Ƿ���������� 
bool IsOperator(char C);

//����������֤�ַ��Ƿ�����ĸ�����ַ�����ĸ�����֣�
bool IsOperand(char C);

// ���ز����������ȼ�����Ȩ�أ���Ȩ��Խ�����ȼ�Խ��
int GetOperatorWeight(char op);
