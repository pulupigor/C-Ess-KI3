#include "stdafx.h";
#include <iostream>;
using namespace std;
int main(void) {
	int year;
	cout << "Enter a year: ";
	cin >> year;// Insert your code herereturn0;
	if (year % 4 != 0)
	{
		cout << "Common year"<<endl;
	}
	else if (year % 100 != 0)
	{
		cout << "Leap year"<<endl;
	}
	else if (year % 400 != 0)
	{
		cout << "Common year"<<endl;
	}
	else
	{
		cout << "Leap year"<<endl;
	}
}