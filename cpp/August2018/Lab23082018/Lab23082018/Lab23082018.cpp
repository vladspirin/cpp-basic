#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
    // Program 1
	// Організувати прямий пошук елементу V у заданому масиві дійсних значень.
	cout << "Program 1" << endl << endl;
	// Объявляем и инициализируем массив
	int const n1 = 10;  int a1[n1]; int V1, max1;
	// Заполняем массив и выводим массив пользователю
	for (int i1 = 0; i1 < n1; i1++) { a1[i1] = rand() % 50;	cout << a1[i1] << " "; }
	max1 = a1[0];
	// Находим максимальный элемент и его индекс
	for (int i1 = 1; i1 < n1; i1++) if (max1 < a1[i1]) { max1 = a1[i1]; V1 = i1; }
	// Условие перемещения элемента
	cout << "maxElement = " << max1 << " Index = " << V1 << endl;
	system("pause");
	system("cls");

	// Program 2
	// Організувати бінарний пошук елементу V у заданому масиві цілих значень.
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");

	// Program 3
	// Організувати m-блочний пошук елементу V у заданому масиві дійсних значень.
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");

	// Program 4
	// Організувати сортування одномірного масиву цілих чисел методом «бульбашкового» сортування.
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

	// Program 5
	// Організувати сортування одномірного масиву цілих чисел методом прямої вставки.
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");

	// Program 6
	// аписати програму «успішність». Користувач вводить 10 оцінок студента. Реалізувати меню для користувача:
	// − Вивід оцінок(вивід масиву);
	// − Перескладання екзамену(користувач вводить номер елементу масиву і нову оцінку);
	// − Стипендія(стипендія виходить, якщо середній бал не нижче 10.7).
	cout << "Program 6" << endl << endl;

	system("pause");
	system("cls");

	// Program 7
	// Використовуючи метод вибору максимального елемента, впорядкувати масив за зростанням.
	cout << "Program 7" << endl << endl;

	system("pause");
	system("cls");

	// Program 8
	// Відсортувати масив дійсних значень. Для сортування використати алгоритм методу бінарної вставки.
	cout << "Program 8" << endl << endl;

	system("pause");
	system("cls");

	// Program 9
	// Впорядкувати заданий список цілих значень методом Шейкера.
	cout << "Program 9" << endl << endl;

	system("pause");
	system("cls");

	// Program 10
	// Об’єднати два впорядковані списки в один, не порушуючи впорядкованості.
	cout << "Program 10" << endl << endl;
	
	system("pause");
	return 0;
};