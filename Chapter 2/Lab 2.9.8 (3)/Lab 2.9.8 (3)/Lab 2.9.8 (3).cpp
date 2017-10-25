// Lab 2.9.8 (3).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main(void) {
	int vector[] = { 1, 7, 3, 8, 3, 7, 1 };
	bool ispalindrome = true;
	int n = sizeof(vector) / sizeof(vector[0]);
	int assi;
 
	for (int i = 0; i < n; i++)
	{
		assi = vector[i];
		vector[i] = vector[n - i - 1];
		vector[n - i - 1] = assi;
		if (vector[i] != vector[n - i - 1])
		{
		ispalindrome = false;
		break;
	    }
	}

	if (ispalindrome)
		cout << "It's a palindrome";
	else 
		cout << "It isn't a palindrome";
	cout << endl;
	return 0;
}
