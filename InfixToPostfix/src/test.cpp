#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
	string expression;
	cout << "输入中缀表达式： \n";
	getline(cin, expression);
	string result = InfixToPostfix(expression);
	cout << "result = " << result << "\n";

}

