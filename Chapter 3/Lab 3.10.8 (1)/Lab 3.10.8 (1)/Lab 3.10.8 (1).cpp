// Lab 3.10.8 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

bool IsPresent(int *balls, int val) {

	int ballsCount = sizeof(*balls) / sizeof(balls[0]);

	cout << ballsCount << endl;

	for (int i = 0; i < ballsCount; i++) {

		if (balls[i] == val) return true;
	}

	return false;
}

int main(void) {

	int maxball;
	int ballsno;
	int *ballsMachine;
	int rnd = 1;
	int generetedBallNum;

	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;

	srand(time(NULL));

	ballsMachine = new int[ballsno];

	for (int i = 0; i < ballsno; i++) {
		generetedBallNum = rand() % maxball + 1;

		if (IsPresent(ballsMachine, generetedBallNum)) {
			i--;
			continue;
		}

		ballsMachine[i] = generetedBallNum;
	}

	for (int i = 0; i < ballsno; i++)
		cout << ballsMachine[i] << ' ';
	cout << endl;

	delete[] ballsMachine;

	return 0;
}

