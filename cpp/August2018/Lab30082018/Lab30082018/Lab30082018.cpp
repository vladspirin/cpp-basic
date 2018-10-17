// Lab30082018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;


#define R 3
#define C 6


void spiralPrint(int m, int n, int a[R][C])
{
	int i, k = 0, l = 0;

	/*  k - starting row index
		m - ending row index
		l - starting column index
		n - ending column index
		i - iterator
	*/

	while (k < m && l < n)
	{
		/* Print the first row from the remaining rows */
		for (i = l; i < n; ++i)
		{
			printf("%d ", a[k][i]);
		}
		k++;

		/* Print the last column from the remaining columns */
		for (i = k; i < m; ++i)
		{
			printf("%d ", a[i][n - 1]);
		}
		n--;

		/* Print the last row from the remaining rows */
		if (k < m)
		{
			for (i = n - 1; i >= l; --i)
			{
				printf("%d ", a[m - 1][i]);
			}
			m--;
		}

		/* Print the first column from the remaining columns */
		if (l < n)
		{
			for (i = m - 1; i >= k; --i)
			{
				printf("%d ", a[i][l]);
			}
			l++;
		}
	}
}

int main()

{
	int a[R][C] = { {1,  2,  3,  4,  5,  6},
	{7,  8,  9,  10, 11, 12},
	{13, 14, 15, 16, 17, 18}
	};

	spiralPrint(R, C, a);
	
	/*
	// Program 1
	// Написати програму, яка формує квадратну матрицю (3 вида)
	cout << "Program 1" << endl << endl;
	const int ROWS = 9;
	const int COLS = 9;
	int arr[ROWS][COLS]{0};
	int count = 1;
	int iMAX, jMAX, iMIN, jMIN;
	for (int i = 0; i < ROWS; i++)	{
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = i + 1;
		}
	}
	
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	const int size = 8;
	int count = 1;
	int arr[size][size] = { 0 };

	for (int i = 0; i < (size / 2); i++)
	{
		for (int j = i; j < (size - i); j++)
		{
			arr[j][i] = count++;
		}
		for (int j = (i + 1); j < (size - i); j++)
		{
			arr[size - i - 1][j] = count++;
		}
		for (int j = (i + 1); j < (size - i); j++)
		{
			arr[size - j - 1][size - i - 1] = count++;
		}
		for (int j = (i + 1); j < (size - i - 1); j++)
		{
			arr[i][size - j - 1] = count++;
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}

	system("pause"); 
	system("cls");*/
	/*
	// Program 2
	// Написати програму, яка міняє місцями перший і останній стовпці квадратної матриці цілих значень.
	cout << "Program 2" << endl << endl;
	int N, M;
	cout << "Enter matrix dimensions:" << endl;
	cout << "M = ";	cin >> M;
	cout << "N = ";	cin >> N;
	int **A = new int*[M];
	for (int i = 0; i < M; i++)	A[i] = new int[N];
	cout << "Enter matrix:" << endl;
	for (int i = 0; i < M; i++)	{
		for (int j = 0; j < N; j++)	{
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < M; i++)	{
		swap(A[i][0], A[i][N - 1]);
	}
	cout << "The desired matrix:" << endl;
	for (int i = 0; i < M; i++)	{
		for (int j = 0; j < N; j++)	{
			cout << A[i][j] << " ";
		} cout << endl;
	}
	system("pause");
	system("cls");
	
	// Program 3
	// Написати програму, яка визначає суму елементів матриці у тих стовпцях, які не містять від’ємних значень.
	cout << "Program 3" << endl << endl;
	
	system("pause");
	system("cls");
	*//*
	// Program 4
	// Написати програму, яка міняє місцями рядки, які містять мінімальний і максимальний елементи матриці дійсних значень.
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

	// Program 5
	// Написати програму, яка додає перший і останній стовпці квадратної матриці і записує результат на місце першого рядка.
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");

	// Program 6
	// Написати програму, яка обчислює скалярний добуток тих рядків матриці, в яких знаходяться максимальний і мінімальний елементи.
	cout << "Program 6" << endl << endl;

	system("pause");
	system("cls");

	// Program 7
	// Написати програму, яка підраховує кількість парних і непарних елементів на головній і побічній діагоналях матриці дійсних значень.
	// Визначити номер стовпця, сума елементів якого мінімальна.
	cout << "Program 7" << endl << endl;

	system("pause");
	system("cls");

	// Program 8
	// Написати програму, яка визначає чи є матриця магічним квадратом, тобто суми всіх значень
	// елементів у кожному рядку, кожному стовпцю та на обох діагоналях співпадають.
	cout << "Program 8" << endl << endl;

	system("pause");
	system("cls");

	// Program 9
	// Написати програму, яка обчислює суму і різницю двох матриць.
	cout << "Program 9" << endl << endl;
		const int ROWS = 5;
	const int COLS = 8;
	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	system("cls");

	// Program 10
	// Написати програму, яка шукає індекси всіх сідлових точок матриці. Сідлова точка – елемент
	// матриці, який є найбільшим у рядку і одночасно найменший в стовпці, або навпаки.
	cout << "Program 10" << endl << endl;

	system("pause");*/
	return 0;
}