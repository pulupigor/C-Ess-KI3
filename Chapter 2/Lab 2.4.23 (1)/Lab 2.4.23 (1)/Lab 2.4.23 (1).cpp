// Lab 2.4.23 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
size_t f(int number)
{
	size_t count = 0;
	for (; number; number >>= 1)
		if (number & 1)
			count++;
	return count;
}
int main()
{
	unsigned long value;
	cout << "Enter value"<<endl;
	cin >> value;
	cout<<f(value)<<endl;
    return 0;
}

