#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include "stack.h"


int main()
{
	char C[100];
	printf("Enter the String:");
	gets_s(C, sizeof(C));
	Reverse(C, strlen(C));
	printf("Reverse:%s", C);
}

