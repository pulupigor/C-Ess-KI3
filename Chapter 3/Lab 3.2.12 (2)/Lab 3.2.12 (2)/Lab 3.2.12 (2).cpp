// Lab 3.2.12 (2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main(void)
{
	int matrix[10][10] = { };
	// Insert your code here
	int *ptr1,*ptr2,*ptr3;
	ptr1 = &matrix[0][0];
	ptr2 = ptr1;
	ptr3 = ptr1;
	ptr2++;
	for (int i = 0; i <10; i++)
	{
		*ptr1 = i+1;
		*ptr2 = *ptr1;
		for (int j = 0; j < 9; j++)
		{		
			*ptr2 = *ptr1 + *ptr3;
			ptr2++;
			ptr3++;
		}
		ptr2 += 1;
		ptr3 += 1;
		ptr1 += 10;
	}
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++) 
	    {
		cout.width(4);
		cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}

