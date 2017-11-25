// Lab 7.2.3 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
using namespace std;
const int DivideByZero = 111;
float internaldiv(float arg1, float arg2)
{
	if (0==arg2)
		throw DivideByZero;
	return arg1 / arg2;
}
float div(float arg1, float arg2)
{
	if(arg2 == 0.0)
		throw DivideByZero;
	return internaldiv(arg1, arg2);;
}
int main(void)
{
	float a, b;
	while(cin >> a)
	{ 
		cin >> b;
		try {
			cout << div(a, b) << endl;
		}
		catch (int exception)
		{
			if(exception==111)
				cout << "Are you kidding me?" << endl;
		}
	}
	return 0;
}
