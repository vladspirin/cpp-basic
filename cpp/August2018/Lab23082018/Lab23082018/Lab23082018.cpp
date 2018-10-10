#include "pch.h"
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	srand(time(0));
	const int SIZE = 10;
    // Program 1
	// Організувати прямий пошук елементу V у заданому масиві дійсних значень.
	cout << "Program 1" << endl << endl;
	int arr1[SIZE]; int V1, max1;
	for (int i = 0; i < SIZE; i++) { arr1[i] = rand() % 50;	cout << arr1[i] << " "; }
	max1 = arr1[0];
	for (int i = 1; i < SIZE; i++) if (max1 < arr1[i]) { max1 = arr1[i]; V1 = i; }
	cout << endl << "maxElement = " << max1 << " Index = " << V1 << endl;
	system("pause");
	system("cls");
	
	// Program 2
	// Організувати бінарний пошук елементу V у заданому масиві цілих значень.
	cout << "Program 2" << endl << endl;
	int arr2[SIZE]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int average_index = 0, // переменная для хранения индекса среднего элемента массива
		first_index = 0, // индекс первого элемента в массиве
		last_index = SIZE - 1, // индекс последнего элемента в массиве
		search_value = 8; // искомое (ключевое) значение
	if (last_index == -1) cout << endl << "Array is empty" << endl; // массив пуст
	while (first_index < last_index) {
		average_index = first_index + (last_index - first_index) / 2; // меняем индекс среднего значения
		(search_value <= arr2[average_index]) ? last_index = average_index : first_index = average_index + 1;    // найден ключевой элемент или нет 
	}
	if (arr2[last_index] == search_value) cout << endl << "Value is found" << endl << "Index = " << last_index << endl;
	else cout << endl << "Value is not found" << endl;
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
	bool flag = false;
	double arr4[SIZE];
	cout << "Please enter " << SIZE << " elements of array:" << endl << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Array [ " << i << " ]= ";
		cin >> arr4[i];
	}
	cout << endl << "Source array:" << endl;
	for (int i = 0; i < SIZE; i++) cout << setw(4) << arr4[i];
	while (!flag) {
		flag = true;
		for (int i = 0; i < SIZE - 1; i++)
			if (arr4[i] > arr4[i + 1]) {
				swap(arr4[i], arr4[i + 1]); // перестановка
				flag = false;
			}
	}
	cout << endl << endl << "This is sorted array: " << endl;
	for (int i = 0; i < SIZE; i++) cout << setw(4) << arr4[i];
	cout << endl;
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