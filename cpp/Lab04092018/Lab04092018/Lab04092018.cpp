// Lab04092018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

void rectanglePaint(int, int);

bool isSimpleNumber(int);

int main()
{
	// Program 1
	
	int a , b;
	cout << "Please enter 2 side of rectangle: ";
	cin >> a >> b; 
	rectanglePaint(a, b);
	cout << "Please enter 2 side of rectangle: ";
	cin >> a >> b;
	rectanglePaint(a, b);
	system("pause");
	system("cls");

	// Program 2

	system("pause");
	system("cls");

	// Program 3
	/*
	system("pause");
	system("cls");

	// Program 4

	system("pause");
	system("cls");

	// Program 5

	system("pause");
	system("cls");

	// Program 6

	system("pause");
	system("cls");

	// Program 7

	system("pause");
	system("cls");
	*/
	// Program 8
	int z8;
	cout << "Please enter your variable: ";
	cin >> z8;
	cout << "Result: " << isSimpleNumber(z8) << endl;
	system("pause");
	system("cls");
	return 0;
}
// Function 1, Program 1
void rectanglePaint(int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << "*";
		cout << endl;
	}
}
// Function 2, Program 2

// Function 3, Program 3

// Function 4, Program 4

// Function 5, Program 5

// Function 6, Program 6

// Function 7, Program 7

// Function 8, Program 8
bool isSimpleNumber(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) break;
		if (i >= n) return true;
		else return false;
	}
}