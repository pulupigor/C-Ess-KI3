// Lab 2.9.8 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;
int main(void){
	int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
	int vector2[7];
	// Insert your code here
	for (int i = 0; i < 7; i++)
	{	
		if (i == 6)
		{
			vector2[0] = vector1[6];
			break;
		}
		vector2[i + 1] = vector1[i];
	}
	for(int i = 0; i < 7; i++)
		cout << vector2[i] << ' ';
	cout << endl;
	return 0;
}

