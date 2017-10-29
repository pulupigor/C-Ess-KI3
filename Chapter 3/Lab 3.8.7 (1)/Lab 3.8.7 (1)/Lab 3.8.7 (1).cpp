// Lab 3.8.7 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

void increment(int &value, int curVal = 1)
{
	value += curVal;
}
void increment(float &value, int curVal = 1)
{
	value += curVal;
}
int main(void)
{
	int intvar = 0;
	float floatvar = 1.5;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			increment(intvar);
			increment(floatvar, sqrt(intvar));
		}
		else
		{
			increment(intvar, i);
			increment(floatvar);
		}
	}
	cout << intvar * floatvar << endl;
	return 0;
}

