// Lab 4.5.7 (6).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sentence;
	getline(cin, sentence);

	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence.find("*") != string::npos)
		{

			sentence.replace(sentence.find("*"),1,sentence.substr(sentence.find("*"),1));
		}
	}
	return 0;
}

