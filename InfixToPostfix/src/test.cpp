#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
	string expression;
	cout << "������׺���ʽ�� \n";
	getline(cin, expression);
	string result = InfixToPostfix(expression);
	cout << "result = " << result << "\n";

}

