// spirin-hw5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	/*// Program 1
	cout << "Program 1" << endl << endl;

	system("pause");
	system("cls");

	// Program 2  
	cout << "Program 2" << endl << endl;
	const float cost = 0.30;

	system("pause");
	system("cls");*/

	// Program 3
	cout << "Program 3" << endl << endl;
	int dist, V, V100;
	float cost1, cost2, cost3, price1, price2, price3;
	cout << "Please enter distance (km): " << endl;
	cin >> dist;
	cout << "Please enter petrol consumption per 100 km: " << endl;
	cin >> V100;
	V = dist * V100 / 100;
	cout << "Please enter the cost of three types of petrol: " << endl << endl;
	cout << "98: ";
	cin >> price1;
	cout << "95: ";
	cin >> price2;
	cout << "DP: ";
	cin >> price3;
	if (price1) { cost1 = V * price1; }
	if (price2) { cost2 = V * price2; }
	if (price3) { cost3 = V * price3; }
	cout << endl << "Result: " << endl << endl;
	cout << cost1 << endl << cost2 << endl << cost3 << endl << endl;
	system("pause");
    return 0;
}

