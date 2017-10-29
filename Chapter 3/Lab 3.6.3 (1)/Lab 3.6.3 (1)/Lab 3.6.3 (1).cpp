// Lab 3.6.3 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void increment(int &value,int curVal=1)
{
	value += curVal;
}
int main(void)
{
	int var = 0;
	for(int i = 0; i < 10; i++)
		if(i % 2)
		increment(var);
		else   increment(var,i);
		cout << var << endl;
		return 0;
}

