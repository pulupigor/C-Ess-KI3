// Lab 3.4.7 (6).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num)
{
	if (num < 2)
		return false;
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			return false;
			break;
		}
	}
}
int main(void)
{
	for(int i = 0; i <= 21; i++)
		if(isPrime(i))
			cout << i << " ";
	cout << endl;
	return 0;
}

