#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {

	float pi = 3.14159265359;
	float x, y;
	float squaredX, partToSquare, squaredPi = pi * pi;

	cout << "Enter value for x: ";
	cin >> x;

	squaredX = x * x;
	partToSquare = squaredX - .5;

	y = squaredX / (squaredPi * (squaredX + .5)) * (1 + squaredX / (squaredPi * partToSquare * partToSquare));

	cout << "y = " << y;
	return 0;
}

