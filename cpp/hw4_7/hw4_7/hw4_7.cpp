// hw4_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	// Program 1
	cout << "Please enter positive six-digit number (format: 000000): " << endl << endl;
	int sixDigit, num1, num2, num3, num4, num5, num6, sum1, sum2;
	cin >> sixDigit;
	if (sixDigit > 999999 || sixDigit < -999999) cout << endl << "Error! You enter a non-six-digit number." << endl << endl; 
	if (sixDigit <= 999999 && sixDigit >= -999999) {
		num1 = sixDigit / 100000;
		sixDigit = sixDigit % 100000;
		num2 = sixDigit / 10000;
		sixDigit = sixDigit % 10000;
		num3 = sixDigit / 1000;
		sixDigit = sixDigit % 1000;
		num4 = sixDigit / 100;
		sixDigit = sixDigit % 100;
		num5 = sixDigit / 10;
		sixDigit = sixDigit % 10;
		num6 = sixDigit;
		sum1 = num1 + num2 + num3;
		sum2 = num4 + num5 + num6;
	}
	if (sum1 == sum2) cout << "You have a lucky number" << endl << endl;
	else cout << "You haven't a lucky number" << endl << endl;
	system("pause");
	system("cls");
	
	// Program 2
/*	cout << "Please enter four-digit number (format: 0000): " << endl << endl;
	int digit;
	cin >> digit;
	if (digit > 9999 || digit < -9999) cout << "Error! You enter a non-four-digit number." << endl << endl;
	//else 
	system("pause");
	system("cls");
	*/
	// Program 3
	cout << "Please enter seven whole numbers: " << endl << endl;
	int n1, n2, n3, n4, n5, n6, n7;
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;
	if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5 && n1 > n6 && n1 > n7) cout << n1 << " is maximum number" << endl << endl;
	else if (n1 < n2 && n2 > n3 && n2 > n4 && n2 > n5 && n2 > n6 && n2 > n7) cout << n2 << " is maximum number" << endl << endl;
	else if (n3 > n2 && n1 < n3 && n3 > n4 && n3 > n5 && n3 > n6 && n3 > n7) cout << n3 << " is maximum number" << endl << endl;
	else if (n4 > n2 && n4 > n3 && n1 < n4 && n4 > n5 && n4 > n6 && n4 > n7) cout << n4 << " is maximum number" << endl << endl;
	else if (n5 > n2 && n5 > n3 && n5 > n4 && n1 < n5 && n5 > n6 && n5 > n7) cout << n5 << " is maximum number" << endl << endl;
	else if (n6 > n2 && n6 > n3 && n6 > n4 && n6 > n5 && n1 < n6 && n6 > n7) cout << n6 << " is maximum number" << endl << endl;
	else cout << n7 << " is maximum number" << endl << endl;
	system("pause");
	system("cls");
	
	// Program 4
	cout << "Please enter your variables: " << endl << endl;


	system("pause");
    return 0;
}

