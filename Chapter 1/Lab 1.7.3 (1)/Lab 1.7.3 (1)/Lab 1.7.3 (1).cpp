// Lab 1.7.3 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double a = 2.3,b=a,c=2.123456,d=c,e=c;
	cout << a << endl;
	cout <<fixed <<setprecision(2)<<b <<endl;
	cout << setprecision(6)<<c <<endl;
	cout << setprecision(2)<<d << endl;
	cout << setprecision(0)<<e << endl;

    return 0;
}

