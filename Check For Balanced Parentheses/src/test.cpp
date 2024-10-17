#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <stack>

//#include "stack.h"

using namespace std;

bool Pair(char start, char end)
{
	if (start == '(' && end == ')') return true;
	else if (start == '{' && end == '}') return true;
	else if (start == '[' && end == ']') return true;
	return false;
}
bool AreParanthesesBalanced(const string& exp)
{
	int length = exp.length();
	stack<char> S;
	for (int i = 0; i < length; i++)
	{
		if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
		{
			S.push(exp[i]);
			//cout << S.top();
		}
		else if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
		{
			if (S.empty() || !Pair(S.top(), exp[i]))
			{
				return false;
			}
			else
			{
				S.pop();
			}
		}
	}
	return S.empty() ? true: false;
}
int main()
{
	string expression;
	while (1)
	{
		cout << "Enter an expression:  ";
		cin >> expression;
		//cout << expression.data() << endl;
		//cout << expression.length() << endl;
		AreParanthesesBalanced(expression);

		if (AreParanthesesBalanced(expression))
			cout << "Balanced\n";
		else
			cout << "Not Balanced\n";
	}

}

