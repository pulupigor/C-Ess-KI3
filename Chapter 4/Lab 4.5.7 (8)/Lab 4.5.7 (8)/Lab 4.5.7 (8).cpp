// Lab 4.5.7 (8).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<iostream>
int main()
{
	std::string values;
	std::getline(std::cin, values);
	std::string template;
	std::getline(std::cin, template);
	// Put values into the template
	std::cout << template << "\n";
}

