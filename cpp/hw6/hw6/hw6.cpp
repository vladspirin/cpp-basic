// hw6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
	// Program 1
	// Task 1



	//system("pause");
	//system("cls");
	// Task 2
	for (int i2 = 7; i2 >= 1; i2--) {
		cout << endl;
		for (int j2 = i2; j2 <= 7; j2++) {
			cout << "*";
		}
	}
	cout << endl << endl;
	system("pause");
	system("cls");
	// Task 3
	/*
	for (int i3 = 1; i3 <= 7; i3++) {
		cout << endl;
		for (int j3 = i3; j3 <= 7; j3++) {
			cout << "*";
		}
	}
	cout << endl << endl;
	system("pause");
	system("cls");
	*/
	// Task 4
	for (int i4 = 1; i4 <= 7; i4++) {
		for (int k = 1; k <= 7 - i4; k++) {
			cout << "\n\t";
		}
		for (int j4 = 1; j4 <= i4; j4++) {
			cout << "*\t\t";
		}
		cout << "\n";

	}
	cout << endl << endl;
	system("pause");
	system("cls");
	// Task 5

	system("pause");
	system("cls");
	// Task 6

	system("pause");
	system("cls");
	// Task 7

	system("pause");
	system("cls");
	// Task 8

	system("pause");
	system("cls");
	// Task 9
	for (int i9 = 7; i9 >= 1; i9--) {
		cout << endl;
		for (int j9 = i9; j9 >= 1; j9--) {
			cout << "*";
		}
	}
	cout << endl << endl;
	system("pause");
	system("cls");
	// Task 10

	system("pause");
	system("cls");

	//Program 2
	int k12 = 0;
	int i11, i21, i31;
	for (int i212 = 100; i212 <= 999; i212++)
	{
		i11 = i212 / 100; 
		i21 = i212 % 10; 
		i31 = (i212 % 100) / 10; 
		if (i11 == i21 || i21 == i31 || i31 == i11) k12++;

	}
	cout << "Result: " << k12 << "\n";
	system("pause");
	system("cls");

	//Program 3
	int n1 = 0, n2 = 0, n3 = 0;
	int count = 0;
	for (int i = 100; i <= 999; i++)
	{
		n1 = i / 100;
		n2 = (i / 10) % 10;
		n3 = i % 10;

		if (n1 != n2 && n2 != n3 && n1 != n3)
		{
			count++;
		}
	}
	cout << count << endl;
	system("pause");
	system("cls");

	//Program 4
	int digit;
	do
	{
		cout << "Please enter your variable: ";
		cin >> digit;
		cout << "\n";
		int out = 0, tmp = 1;
		for (; digit != 0;)
		{
			if (digit % 10 != 3 && digit % 10 != 6) {
				out = out + tmp * (digit % 10);
				tmp *= 10;
    		}
			digit /= 10;
		}
		cout << "New digit: " << out << "\n";
		cout << "If you want to continue, press 1: ";
		cin >> digit;
	} while (digit == 1);
	system("pause");
	system("cls");

	//Program 5
	int a = 0;
	cout << "Please enter any integer A: ";
	cin >> a;
	cout << "\n\n";
	for (int b = 1; b < a; b++)
	{
		if ((a % (b * b) == 0) && (a % (b * b * b) != 0))
			cout << b << " ";
	}
	system("pause");
	system("cls");

	//Program 6
	int a1, b1;
	cin >> a1;
	b1 = a1;
	int sum = 0;
	while (abs(b1) > 0) {
		sum += b1 % 10;
		b1 /= 10;
	}
	if ((sum*sum*sum) == (a1*a1)) cout << "yes" << endl;
	else cout << "no" << endl;
    system("pause");
	system("cls");

	//Program 7
	int num;
	cout << "Insert you number\n";
	cin >> num;
	for (int i127 = 1; i127 <= num; i127++) {
		if (num % i127 == 0)
			cout << i127 << "\n";
	}
	system("pause");
	system("cls");

	//Program 8
	int num1, num2;
	cout << "Please enter first number : ";
	cin >> num1 ;
	cout << "Please enter second number: ";
	cin >> num2;
	cout << "Numbers on which to divide without a remainder = ";
	for (int i128 = 1; i128 <= num1 && i128 <= num2; i128++) {
		if (num1 % i128 == 0 && num2 % i128 == 0)
			cout << i128 << "\n";
	}
	cout << endl;
	system("pause");
	system("cls");
    return 0;
}

