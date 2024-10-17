#include "stack.h"

using namespace std;

//函数用于评估后缀表达式并返回输出
int EvaluatePostfix(string expression)
{
	stack<int> S;
	for (int i = 0; i < expression.length(); i++) 
	{
		if (expression[i] == ' ' || expression[i] == ',') continue;
		else if (IsNumericDigit(expression[i]))
		{ 
			//个位数的情况
			//S.push(expression[i]-'0');
			int num = 0;
			while (i < expression.length() && IsNumericDigit(expression[i]))
			{
				num = num * 10 + expression[i] - '0';
				i++;
			}
			i--;
			S.push(num);
		}
		else if (IsOperator(expression[i]))
		{
			int num1 = S.top();
			S.pop();
			int num2 = S.top();
			S.pop();
			int result = PerformOperation(expression[i], num1, num2);
			S.push(result);
		}
	}
	return S.top();
}

// 执行操作并返回输出的函数。.
int PerformOperation(char operation, int operand1, int operand2)
{
	assert(operation == '+' || operation == '-' || operation == '*' || operation == '/');
	if (operation == '+') return (operand1 + operand2);
	else if (operation == '-') return (operand2 - operand1);
	else if (operation == '*') return (operand1 * operand2);
	else if (operation == '/') return (operand1 / operand2);
}

//函数用于验证某个字符是否是运算符号。. 
bool IsOperator(char C)
{
	if (C == '+' || C == '-' || C == '*' || C == '/')
	{
		return true;
	}
	return false;
}

//函数用于验证字符是否为数字 
bool IsNumericDigit(char C)
{
	if (C >= '0' && C <= '9')
	{
		return true;
	}
	return false;
}