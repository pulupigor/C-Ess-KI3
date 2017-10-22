// Lab 2.1.5 (5).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int year,a,b,c,d,e;
	cout << "Enter year from 1900 to 2099"<<endl;
	cin >> year;
	a = year % 19;
	b = year % 4;
	c = year % 7;
	d = (a * 19 + 24) % 30;
	e = (2 * b + 4 * c + 6 * d + 5) % 7;
	if (d + e < 10)
	{
		cout << "Easter falls on " << d + e + 22 << " day of March"<<endl;
	}
	else
		cout << "Easter falls on " << d + e - 9 << " day of April"<<endl;
    return 0;
}

