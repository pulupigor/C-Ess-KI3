// Lab 2.3.19 (8).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	double f=1;
	cout << "Enter n for factorial" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	cout << fixed<<(int)f << endl;
    return 0;
}

