#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	// Program 1
	// У матриці А, кількість рядків якої є парним числом, а кількість стовпчиків у кожному рядку є різною,
	// відсортувати рядки по черзі за зростанням та за спаданням.З найбільших елементів кожного рядка матриці
	// А сформувати одновимірний масив В, після чого інвертувати порядок елементів у ньому.	cout << "Program 1" << endl << endl;

	system("pause");
	system("cls");

	// Program 2
	// Транспонувати прямокутну матрицю А (рядки та стовпці поміняти місцями), заповнену
	// випадковими натуральними числами з інтервалу[a; b].В отриманій матриці А поміняти місцями перший
	// рядок з останнім, другий – з передостаннім і т.д.аж до центру матриці.Обнулити(усім елементам присвоїти
	// значення 0) ті рядки матриці А, в яких перший нуль зустрічається у першій половині рядка, а інші рядки
	// відсортувати за спаданням.
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");

	// Program 3
	// Задані два одномірні масиви однакової довжини: R і S. Сформувати квадратну матрицю A, кожен
	// елемент якої, що знаходиться в i - му рядку та j - му стовпчику, дорівнює сумі елементів масиву R на позиції
	// i та масиву S на позиції j.Транспонувати матрицю A та інвертувати порядок елементів кожного її рядка,
	// після чого поміняти місцями перший і останній рядок.
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");
    return 0;
}

