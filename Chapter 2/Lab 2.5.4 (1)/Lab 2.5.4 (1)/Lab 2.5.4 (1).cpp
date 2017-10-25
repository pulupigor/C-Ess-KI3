// Lab 2.5.4 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	for (;;)
	{
		int i;
		float a, b, c;
		cout << "MENU:" << endl;
		cout << "0-exit" << endl;
		cout << "1-addition" << endl;
		cout << "2-substraction" << endl;
		cout << "3-multiplication" << endl;
		cout << "4-division" << endl;
		cout << "Your choise?\n" << endl;
		cin >> i;
		switch (i)
		{
		case 0:exit(0); break;
		case 1:puts("Enter two values");
			cin >> a;
			cin >> b;
			c = a + b;
			cout << c << endl;
			break;
		case 2:puts("Enter two values");
			cin >> a;
			cin >> b;
			c = a - b;
			cout << c << endl;
			break;
		case 3:puts("Enter two values");
			cin >> a;
			cin >> b;
			c = a * b;
			cout << c << endl;
			break;
		case 4:puts("Enter two values");
			cin >> a;
			cin >> b;
			c = a / b;
			cout << c << endl;
			break;
		default:puts("Invalid command");
			break;
		}
		cout << "\n";
	}
    return 0;
}

