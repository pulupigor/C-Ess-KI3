// Lab 4.5.7 (2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<iostream>

using namespace std;
int main()
{
	std::string from;
	std::getline(std::cin, from);
	std::string to;
	std::getline(std::cin, to);
	std::string sentence;
	std::getline(std::cin, sentence);

	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence.compare(i, from.length(),from) == 0)
		{
			sentence.replace(i, from.length(),to);
		}
	}

	std::cout << sentence << "\n";
}

