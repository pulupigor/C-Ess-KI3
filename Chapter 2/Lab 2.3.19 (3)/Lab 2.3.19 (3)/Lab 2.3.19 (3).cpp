// Lab 2.3.19 (3).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double n,power=1;
	do
	{
		cout << "Enter power" << endl;
		cin >> n;
	} while (n < 0 || n>63);
	for (size_t i = 0; i < n; i++)
	{
		power *= 2;
	}
	cout << fixed<<power<<endl;
    return 0;
}

