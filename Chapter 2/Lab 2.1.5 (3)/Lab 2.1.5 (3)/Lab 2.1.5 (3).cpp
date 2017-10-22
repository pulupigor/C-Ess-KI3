// Lab 2.1.5 (3).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	int   sys;
	float m, ft, in,integer;
	cout << "What system do you want?Press 0 if metric,1 if imperial" << endl;
	cin >> sys;
	if (sys == 0)
	{
		cout << "Enter Distance" << endl;
		cout << "Metres:" << endl;
		cin >> m;
		in = m*39.37;
		float fractional = modf(in,&integer);
		ft = integer / 12;
		in = (int)integer % 12 + fractional;
		cout <<(int)ft << "'" <<fixed<<setprecision(5)<< in<< "\"";

	}
	else if(sys==1)
	{
		cout << "Enter Distance" << endl;
		cout << "Foots:" << endl;
		cin >> ft;
		cout << "Inches:" << endl;
		cin >> in;
		m = (ft * 12 + in)/39.37;
		cout << m << "m";
	}
    return 0;
}

