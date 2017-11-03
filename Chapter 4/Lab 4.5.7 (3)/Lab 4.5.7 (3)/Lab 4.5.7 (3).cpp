// Lab 4.5.7 (3).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<iostream>

int main()
{
	std::string stop_words;
	std::getline(std::cin, stop_words);
	std::string sentence;
	std::getline(std::cin, sentence);

	
	std::cout << sentence << "\n";
}

