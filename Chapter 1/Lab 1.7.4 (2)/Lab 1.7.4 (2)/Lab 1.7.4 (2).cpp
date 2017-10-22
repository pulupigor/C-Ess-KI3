// Lab 1.7.4 (2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int numberOne, numberTwo;
	float epsilon = 0.000001;
	cin >> numberOne;
	cin >> numberTwo;
	bool t = fabs(1.0/(float)numberOne - 1.0/(float)numberTwo) < epsilon;
	if (t)
	{
		cout << "Values are equal(by 0.000001 epsilon)"<<endl;
	}
	else
	{
		cout << "Values are not equal(by 0.000001 epsilon)"<<endl;
	}
    return 0;
}

