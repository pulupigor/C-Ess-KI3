// Lab 4.2.5 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	unsigned long sum=0;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		sum+= i;
	}
	cout << sum << endl;
    return 0;
}

