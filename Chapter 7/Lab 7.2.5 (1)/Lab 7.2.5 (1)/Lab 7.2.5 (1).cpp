// Lab 7.2.5 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;

class MyException
{
public:
	string mes;
	MyException(string mes) { this->mes = mes; }
};


class Matrix
{
private:
	int **elem;
	int rows_count;
	int columns_count;

public:
	Matrix();
	Matrix(int rows, int columns);
	void FillCell(int row, int column, int value);
	void Print();
	void Add(Matrix *matrix);
};

Matrix::Matrix()
{
	*elem = new int[1];
	elem[0] = new int[1];

	rows_count = 1;
	columns_count = 1;
}

Matrix::Matrix(int rows, int columns)
{
	if (rows <= 0)
		throw new MyException("Rows count can not be <= 0");

	if (columns <= 0)
		throw new MyException("Columns count can not be <= 0!");

	this->elem = new int*[rows];

	for (int i = 0; i < rows; ++i)
		this->elem[i] = new int[columns];

	this->rows_count = rows;
	this->columns_count = columns;
}

void Matrix::FillCell(int row, int column, int value)
{
	if (row >= rows_count || column >= columns_count)
		throw new MyException("Cell not exist!");

	if (row < 0 || column < 0)
		throw new MyException("There are no indexes below zero!");

	this->elem[row][column] = value;
}

void Matrix::Print()
{
	for (int i = 0; i < this->rows_count; i++)
	{
		for (int j = 0; j < this->columns_count; j++)
		{
			cout << this->elem[i][j] << ' ';
		}
		cout << endl;
	}
}

void Matrix::Add(Matrix *matrix)
{
	if (matrix->columns_count != this->columns_count
		|| matrix->rows_count != this->rows_count)
		throw new MyException("Can`t add matrices with different sizes!");

	for (int i = 0; i < this->rows_count; i++)
		for (int j = 0; j < this->columns_count; j++)
			this->elem[i][j] += matrix->elem[i][j];
}

Matrix* CreateMatrix(int matrixNumber)
{
	Matrix* matrix;
	int rows, columns;
	int val;

	cout << "Matrix " << matrixNumber << ": " << endl;
	cout << "Enter number of rows: ";
	cin >> rows;

	cout << "Enter number of columns: ";
	cin >> columns;

	matrix = new Matrix(rows, columns);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cin >> val;
			try
			{
				matrix->FillCell(i, j, val);
			}
			catch (MyException e)
			{
				cout << e.mes << endl;
			}
		}
	}

	return matrix;
}

int main()
{
	try
	{
		Matrix *matrix1 = CreateMatrix(1);
		Matrix *matrix2 = CreateMatrix(2);

		cout << "Matrix 1: " << endl;
		matrix1->Print();
		cout << endl;

		cout << "Matrix 2: " << endl;
		matrix2->Print();
		cout << endl;

		try
		{
			matrix1->Add(matrix2);
			matrix1->Print();
		}
		catch (MyException e)
		{
			cout << e.mes << endl;
		}

	}
	catch (MyException e)
	{
		cout << e.mes << endl;
	}

	return 0;
}

