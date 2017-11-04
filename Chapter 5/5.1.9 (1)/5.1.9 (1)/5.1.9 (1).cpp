// 5.1.9 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	string name;
	int    age;
	int weight;
};
void print(Person* person)
{
	cout << person->name << " is " << person->age << " years old" << "and weight is" << person->weight << endl;
}
int main()
{
	Person person, second_person;
	person.name = "Harry";
	person.age = 23;
	person.weight = 64;
	cout << "Meet " << person.name << endl;
	print(&person);

	second_person.name = "Jane";
	second_person.age = 22;
	second_person.weight = 56;
	cout << "Meet " << person.name << endl;
	print(&second_person);
	return 0;
}

