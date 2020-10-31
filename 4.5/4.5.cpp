// 4.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// < Коровицький Тарас >
// Лабораторна робота № 4.5
//«Попадання» у плоску фігуру
// Варіант 13

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R1, R2, R;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{

		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y >= sqrt(R2 * R2 - x * x) && y >= 0 && x <= 0) ||
			(y <= sqrt((R1 - R2) * (R1 - R2) - (x * x)) && y <= 0 && x >= 0))
			cout << "yes" << endl;
		else

			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;

		if ((y >= sqrt(R2 * R2 - x * x) && y >= 0 && x <= 0) ||
			(y <= sqrt((R1 - R2) * (R1 - R2) - (x * x)) && y <= 0 && x >= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}