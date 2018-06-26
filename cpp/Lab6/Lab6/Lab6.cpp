// Lab6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// Program 1
	cout << "Program 1" << endl << endl;
	cout << "Please enter the variable: " << endl << endl;
	int a;
	cin >> a;
	if (a % 2 == 0) cout << "Your variable is paired" << endl << endl;
	else cout << "Your variable isn't paired" << endl << endl;
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2" << endl << endl;
	cout << "Please enter variables: " << endl << endl;
	int b, c;
	cin >> b >> c;
	if (b > c) cout << b << " > " << c << endl << endl;
	if (c > b) cout << c << " > " << b << endl << endl;
	if (b == c) cout << "b = c" << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3" << endl << endl;
	cout << "Please enter the variable: " << endl << endl;
	int d;
	cin >> d;
	if (d < 0) cout << "Your number is negative" << endl << endl;
	if (d == 0) cout << "Your number is = 0" << endl << endl;
	if (d > 0) cout << "You have positive real number" << endl << endl;
	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4" << endl << endl;
	cout << "Please enter variables: " << endl << endl;
	int e, h;
	cin >> e >> h;
	(e == h) ? cout << e << " = " << h << endl << endl : cout << e << " != " << h << endl << endl;
	(e > h) ? cout << e << endl << h << endl : cout << h << endl << e << endl;
	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5" << endl << endl;
	cout << "Please enter the variable: " << endl << endl;
	int f;
	cin >> f;
	(f >= -2 && f <= 4) ? cout << "Your variable falls into the range" : cout << "Not correct";
	system("pause");
	system("cls");

	// Program 6
	cout << "Program 6" << endl << endl;
	cout << "Please enter variables: " << endl << endl;
	int R, S, Sa, A, D, N, M;
	const float pi = 3.14;
	cin >> R;
	S = pi * pow(R , 2);
	D = sqrt(2 * pow(a, 2));
	// In process...
	(S > Sa) ? : ;
	system("pause");
	system("cls");
	
	// Program 7
	cout << "Program 7" << endl << endl;
	// task 1
	cout << "Please enter the variable: ";
	int X;
	cin >> X;
	(X >= -2 && X <= 5) || (X >= 7 && X <= 10) ? cout << endl << "Your result falls in the interval from -2 to 5 or from 7 to 10" << endl << endl : cout << endl << "Your result doesn't fall into your intervals" << endl << endl;
	// task 2
	(X <= -1 || X >= 1) && (X <= 2 || X >= 3) ? cout << endl << "Your result is outside the interval from -1 to 1 or from 2 to 3" << endl << endl : cout << endl << "Your result isn't outside the interval" << endl << endl;
	// task 3
	cout << "Please enter the variable: " << endl;
	int a1, b1;
	cin >> a1 >> b1;
	((a1 % 2 == 0) && (b1 % 2 != 0)) || ((a1 % 2 != 0) && (b1 % 2 == 0)) ? cout << endl << "One of your variable is paired, but second from them no" << endl << endl : cout << endl << "Variables don't fit the condition" << endl << endl;
	// task 4
	cout << "Please enter the variables: " << endl;
	int x1, y1;
	cin >> x1 >> y1;
	// In process...
	system("pause");
	system("cls");
    return 0;
}

