// Lab 4.4.1 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string> 

using namespace std;

int NumOfLetters(int i,string sentence,string letters[])
{
		int j = 0;
		for (int k = 0; k <= sentence.length(); k++)
		{
			if (sentence.substr(k, 1) == (letters[i]))
			{
				j++;
			}
		}
		return j;
}
int main(void) {
	string sentence;
	string letters[] = { "a","b","c","d","e","f","g","h","i","j","k","l",
		"m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
	getline(cin, sentence);

	for (int i = 0; i < 26;i++)
	{
		cout<<letters[i]<<"="<<NumOfLetters(i,sentence,letters)<<endl;
	}
	return 0;
}
