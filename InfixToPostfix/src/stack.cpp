#include "stack.h"

using namespace std;

//����׺���ʽת��Ϊ��׺���ʽ�ĺ���
string InfixToPostfix(string expression)
{
	stack<char> S;
	string postfix = "";
	for (int i = 0; i < expression.length(); i++)
	{
		if (expression[i] == ' ' || expression[i] == ',') continue;
		else if (IsOperand(expression[i]))
		{
			postfix += expression[i];
		}
		else if (IsOperator(expression[i]))
		{
			while (!S.empty() && S.top() != '(' && HasHigherPrecedence(S.top(), expression[i]))
			{
				postfix += S.top();
				S.pop();
			}
			S.push(expression[i]);
		}
		else if (expression[i] == '(')
		{
			S.push(expression[i]);
		}
		else if (expression[i] == ')')
		{
			while (!S.empty() && S.top() != '(')
			{
				postfix += S.top();
				S.pop();
			}
		}
	}
	while (!S.empty())
	{
		postfix += S.top();
		S.pop();
	}
	return postfix;
}

//����������֤ĳ��������Ƿ��������������и��ߵ����ȼ�
int HasHigherPrecedence(char operator1, char operator2)
{
	int op1 = GetOperatorWeight(operator1);
	int op2 = GetOperatorWeight(operator2);
	return op1 > op2 ? true : false;
}



//����������֤ĳ���ַ��Ƿ���������š�. 
bool IsOperator(char C)
{
	if (C == '+' || C == '-' || C == '*' || C == '/')
	{
		return true;
	}
	return false;
}

//����������֤�ַ��Ƿ�Ϊ������
bool IsOperand(char C)
{
	if (C >= '0' && C <= '9')	return true;
	else if (C >= 'a' && C <= 'z')	return true;
	else if (C >= 'A' && C <= 'Z')	return true;
	return false;
}
int GetOperatorWeight(char op)
{
	int weight = 0;
	switch (op)
	{
	case'+':
	case'-':
		weight = 1;
	case'*':
	case'/':
		weight = 2;
	}
	return weight;
}
