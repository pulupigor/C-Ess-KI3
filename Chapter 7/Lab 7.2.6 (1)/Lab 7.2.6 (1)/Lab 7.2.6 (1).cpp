#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;


class IndexOutOfRangeException
{
public:
	string message;
	IndexOutOfRangeException(string message)
	{
		this->message = message;
	}
};


class ValueHolder
{
private:
	int val;
	int max;
	int min;

public:
	ValueHolder(int value, int min, int max);
	void Add(int value);
	void Substract(int value);
	int GetValue();
};

ValueHolder::ValueHolder(int value, int min, int max)
{
	this->val = value;
	this->max = max;
	this->min = min;
}

void ValueHolder::Add(int value)
{
	if (this->val + value > this->max)
		throw new IndexOutOfRangeException("Value will be too high!");

	this->val += value;
}

void ValueHolder::Substract(int value)
{
	if (this->val - value < this->min)
		throw new IndexOutOfRangeException("Value will be too low!");

	this->val -= value;
}

int ValueHolder::GetValue()
{
	return this->val;
}


int main()
{
	int val, min, max;
	ValueHolder *holder1, *holder2;

	cin >> val >> min >> max;
	holder1 = new ValueHolder(val, min, max);
	cin >> val >> min >> max;
	holder2 = new ValueHolder(val, min, max);

	cin >> val;

	try
	{
		holder1->Add(val);
	}
	catch (IndexOutOfRangeException *e)
	{
		cout << e->message << endl;
	}

	cin >> val;
	try
	{
		holder2->Add(val);
	}

	catch (IndexOutOfRangeException *e)
	{
		cout << e->message << endl;
	}

	cin >> val;
	try
	{
		holder1->Add(val);
	}
	catch (IndexOutOfRangeException *e)
	{
		cout << e->message << endl;
	}

	cout << holder1->GetValue() << endl;
	cout << holder2->GetValue() << endl;

	return 0;
}