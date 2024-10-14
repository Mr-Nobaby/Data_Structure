#include "stack.h"
using  namespace std;

void Reverse(char C[], int n)
{
	stack<char> S;
	for (int i = 0; i < n; i++)
	{
		S.push(C[i]);
	}	for (int i = 0; i < n; i++)
	{
		C[i] = S.top();
		S.pop();
	}
}