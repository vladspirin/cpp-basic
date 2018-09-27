// Lab20092018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

void ptrSwap(int *&ptr1, int *&ptr2) {
	int *tmp = ptr2;
	ptr2 = ptr1;
	ptr1 = tmp;
}

int main()
{
    // Program 1
	// Використовуючи вказівники та оператор розйменування, визначить більше з двох чисел.
	cout << "Program 1" << endl << endl;
	int x1, y1; int *a1 = &x1, *b1 = &y1;
	cout << "Please enter first variable: "; cin >> x1;
	cout << "Please enter second variable: "; cin >> y1;
	if (*a1 < *b1) cout << "Result: x < y" << endl;
	else cout << "Result: x > y" << endl;
	system("pause");
	system("cls");
	
	// Program 2
	// Використовуючи вказівники та оператор розйменування, визначить знак числа, введеного з клавіатури.
	cout << "Program 2" << endl << endl;
	
	system("pause");
	system("cls");
	
	// Program 3
	// Використовуючи вказівники та оператор розйменування, обміняйте місцями значення двох змінних.
	cout << "Program 3" << endl << endl;
	int var1, var2; int *ptrvar1, *ptrvar2;
	ptrvar1 = &var1, ptrvar2 = &var2;
	cout << "Please enter first variable: "; cin >> var1;
	cout << "Please enter second variable: "; cin >> var2;
	cout << "First variable: " << *ptrvar1 << " Second variable: " << *ptrvar2 << endl;
	cout << "After reverse: " << endl;
	ptrSwap(ptrvar1, ptrvar2);
	cout << "First variable: " << *ptrvar1 << " Second variable: " << *ptrvar2 << endl;
	system("pause");
	system("cls");
	/*
	// Program 4
	// Написати примітивний калькулятор, користуючись тільки вказівниками.
	cout << "Program 4" << endl << endl;
	system("pause");
	system("cls");

	// Program 5
	// Використовуючи вказівник на масив цілих чисел, порахувати суму елементів масиву.
	// Використовувати у програмі арифметику вказівників для просуванню по масиву, а також оператор разйменування.
	cout << "Program 5" << endl << endl;
	system("pause");
	system("cls");

	// Program 6
	// Описати і задати 2 масиви типу int і float розмірністю 7. Вивести на екран значення всіх елементів
	// обох масивів з використанням адресної арифметики.
	cout << "Program 6" << endl << endl;
	system("pause");
	system("cls");

	// Program 7
	// Написати програму, яка обчислює суму мінімального і максимального елементів масиву значень
	// з плаваючою крапкою подвійної точності. Здійснити пошук мінімального і максимального елементів у двох окремих функціях.
	cout << "Program 7" << endl << endl;
	system("pause");
	system("cls");

	// Program 8
	// Написати програму, яка обчислює суму додатних елементів масиву дійсних чисел.
	cout << "Program 8" << endl << endl;
	system("pause");
	system("cls");

	// Program 9
	// Написати програму, яка визначає масив дійсних чисел і обчислює суму елементів з непарними індексами.
	cout << "Program 9" << endl << endl;
	system("pause");
	system("cls");
	*/
	return 0;
}