// Lab 2.3.19 (5).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main(void){
	int n;
	do
	{
		cout << "Enter value greater than 1 and less than 20" << endl;
		cin >> n;
		if (n <= 1 || n >= 20)
		{
			cout << "Invalid Value";
		}
	} while (n <= 1||n>=20);


	cout << '+';	 
	for(int i = 0; i < n; i++)
		cout << '-';
	
	cout << '+' << endl;
	for(int i = 0; i < n; i++)
	{
		cout << '|';
	for(int j = 0; j < n; j++)
		cout << ' ';
	cout << '|' << endl;
	}

	cout << '+';
	for(int i = 0; i < n; i++)
		cout << '-';cout << '+' << endl;
	return 0;}

