
// Lab5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	// Program 1
	cout << "Program 1 "<< endl << endl;
	int a, b, c, sum, op, average;	
	cout << "Please enter variables: " << endl << endl;
	cin >> a >> b >> c;
	sum = a + b + c;
	op = a * b * c;
	average = (a + b + c) / 3;
	cout << "Result: " << sum << endl << endl;
	cout << "Result: " << op << endl << endl;
	cout << "Result: " << average << endl << endl;
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2 " << endl << endl;
	int amount;
	float s, per, bill;
	cout << "Please enter the price of one laptop: " << endl << endl;
	cin >> amount;
	cout << "Please enter the amount of laptops: " << endl << endl;
	cin >> s;
	cout << "Please enter a discount percentage: " << endl << endl;
	cin >> per;
	bill = (amount * s) - (amount * s * per / 100);
	cout << "The total cost of the order is: "<< bill << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3 " << endl << endl;
	double salary, deal, percent, constsalary = 100 + 0.05; // Не правильно, обратить внимание на процент от продаж
	cout << "Please enter total cost of manager deals per month: " << endl << endl;
	cin >> deal;
	//cout << "Please enter percent of manager deals per month: " << endl << endl;   // Пересчитать вот тут, сами проценты, нужна формула
	//cin >> percent;
	salary = deal * percent / 100 + constsalary;
	cout << "Salary: " << salary << endl << endl;
	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4 " << endl << endl;
	double GB, DSpeed, ConSpeed, convert;
	int hour, min, sec;
	cout << "Please enter the size of one movie in GB: " << endl << endl;
	cin >> GB;
	cout << "Please enter download speed in bit/s: " << endl << endl;
	cin >> ConSpeed;
	convert = 
	//DSpeed = ConSpeed / 8;

	system("pause");
	system("cls");
	/*

	1 байт = 8 бит;
	1 кБайт = 1024 байт = 1024*8 бит;
	1 мБайт = 1024 кБайт = 1024*8 кБит;
	1 гБайт = 1024 мБайт = 1024*8 мБит.

	*/
	// Program 5
	cout << "Program 5 " << endl << endl;

	system("pause");
	return 0;
}

