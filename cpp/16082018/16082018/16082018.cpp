// 16082018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1
	cout << "Program 1" << endl << endl;
	const int month = 6; double profit[month], sum1 = 0; 
	cout << "Please enter month profit of company: " << endl;
	for (int i1 = 0; i1 < month; i1++) cin >> profit[i1];
	for (int j1 = 0; j1 < month; j1++) sum1 += profit[j1];
	cout << "Income of the company for 6 months = " << sum1 << endl << endl;
	system("pause");
	system("cls");
	
	// Program 2
	cout << "Program 2" << endl << endl;
	const int n2 = 5;
	int a2[n2];
	cout << "Please specify the number of seats in the array: " << endl;
	for (int j2 = 0; j2 < n2; j2++) cin >> a2[j2];
	for (int i2 = n2 - 1; i2 >= 0; i2--) cout << a2[i2] << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3" << endl << endl;
	const int x3 = 5; int side[x3], sum3 = 0;
	cout << "Please enter side of pentagon: " << endl;
	for (int i3 = 0; i3 < x3; i3++) cin >> side[i3];
	for (int j3 = 0; j3 < x3; j3++) sum3 += side[j3];
	cout << sum3 << endl << endl;
	system("pause");
	system("cls");
	
	// Program 4
	cout << "Program 4" << endl << endl;
	int min, max, mN = 0, mX = 0; const int month4 = 12; double profit[month4];
	cout << "Please enter month profit of company: " << endl;
	min = max = profit[0];
	for (int i4 = 0; i4 < month4; i4++) {
		cin >> profit[i4];
		if (min > profit[month4]) {
			
			mN = month4 - 1;
		}
		if (max > profit[month4]) {

			mX = month4 - 1;
		}
	}
	cout << "Result: min = " << mN << "max = " << mX << endl;
	system("pause");
	system("cls");
	/*
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
	// Program 10
	cout << "Program 10" << endl << endl;
	const int N = 100; int a[N], b[N], S = 0, i, n;
	cout << "Enter the number of values in the array: "; cin >> n; // фактическое количество
	for (i = 0; i < n; i++) cin >> a[i];
	for (i = 0; i < n; i++) cin >> b[i];
	for (i = 0; i < n; i++) S += a[i] * b[i]; cout << "Your result is = " << S << endl << endl;
	system("pause");
	return 0;
}
