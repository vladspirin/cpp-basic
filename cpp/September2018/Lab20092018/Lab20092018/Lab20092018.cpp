// Lab20092018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    // Program 1
	cout << "Program 1" << endl << endl;
	int x1, y1; int *a1 = &x1, *b1 = &y1;
	cout << "Please enter your variable: ";
	cin >> x1 >> y1;
	if (*a1 < *b1) cout << "x < y" << endl;
	else cout << "x > y" << endl;
	system("pause");
	system("cls");
	
	// Program 2
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");
	
	// Program 3
	cout << "Program 3" << endl << endl;
	int x2, y2; int *a2 = &x2, *b2 = &y2;
	cout << "Please enter your variable: ";
	cin >> x2 >> y2;
	cout << "First variable: " << x2 << "Second variable: " << y2;
	//x2 = *a2++;
	//y2 = *b2--;
	cout << "First variable: " << x2 << "Second variable: " << y2;
	system("pause");
	system("cls");
	/*
	// Program 4
	cout << "Program 4" << endl << endl;
	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5" << endl << endl;
	system("pause");
	system("cls");

	// Program 6
	cout << "Program 6" << endl << endl;
	system("pause");
	system("cls");

	// Program 7
	cout << "Program 7" << endl << endl;
	system("pause");
	system("cls");

	// Program 8
	cout << "Program 8" << endl << endl;
	system("pause");
	system("cls");

	// Program 9
	cout << "Program 9" << endl << endl;
	system("pause");
	system("cls");
	*/
	return 0;
}