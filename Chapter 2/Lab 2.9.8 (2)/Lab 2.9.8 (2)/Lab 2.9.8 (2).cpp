// Lab 2.9.8 (2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int money[5] = {50,20,10,5,1};
	int summ;
	string mon;
	cin >> summ;
	do
	{
		for (int i = 0; i < 5; i++)
		{
			for (;;)
			{
				if (summ >= money[i])
				{	
				summ -= money[i];
				cout << money[i]<<" ";
			    }
				else
					break;
			}
		}
	} while (summ!=1);
    return 0;
}

