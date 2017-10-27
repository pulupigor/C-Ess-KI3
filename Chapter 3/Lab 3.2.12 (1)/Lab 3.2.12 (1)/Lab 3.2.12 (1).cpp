// Lab 3.2.12 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);
	int *ptr1,*ptr2;
	ptr1 = vector;
	ptr2 = ptr1 +1;
	for (int i = 0; i < n-1;i++)
	{
		if (*ptr1 > *ptr2)
		{
			ptr1 = ptr2;
			ptr2 += 1;
		}
		else
		{
			ptr2 += 1;
		}
	}
	cout << *ptr1 << endl;
	return 0;
}

