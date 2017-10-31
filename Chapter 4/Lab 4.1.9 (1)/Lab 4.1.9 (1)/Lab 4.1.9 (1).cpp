// Lab 4.1.9 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int course, numberOfGrades, G;
	int **arr;
	cout << "Enter course" << endl;
	cin >> course;
	arr = new int *[course];
	for (int r = 0; r < course; r++)
	{
		cin >> numberOfGrades;
		arr[r] = new int[numberOfGrades];
		for (int c = 0; c <numberOfGrades; c++)
		cin>>arr[r][c];
	}

    return 0;
}

