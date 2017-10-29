// Lab 3.4.7 (5).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
using namespace std;
struct Date {
	int year;int month;int day;
};
Date today(void)
{
	time_t t = time(NULL);
	tm convertedTime = *localtime(&t);
	Date date = { convertedTime.tm_year + 1900, convertedTime.tm_mon + 1, convertedTime.tm_mday };
	return date;

}
int main(void)
{
	Date todaysDate = today();
	cout << todaysDate.year << "-" << todaysDate.month << "-" << todaysDate.day << endl;
	
	return 0;
}

