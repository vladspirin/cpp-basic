// bbu181spirin4_1Lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// Programm 1

	int n, x, y;
	y = ceil((n % 4) * 0.25 );
	x = 366 - y;
	cout << "In " << n << "year = " << x << " days" << endl;
	system("pause\n");
	system("cls");
	

	// Programm 2


	// Programm 3

	// Programm 4 

	// Programm 5

	float pi = 3.1415926;	int R, V;
	cout << "Please enter a ball radius: ";
	cin >> R;
	V = 4 / 3 * pi * pow(R, 3); // Тут ошибка в начале где 4/3 
	cout << "Result: " << V;
	system("pause\n");
	system("cls");

	// Programm 6  

	return 0;
}



