#include "pch.h"
#include <cstdlib>
#include <vector>
#include <fstream>
#include <iostream>
#include <complex>

extern char name1[90] = "\0", name2[90] = "\0", name3[90] = "\0", name4[90] = "\0";
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	cout << "Введите имя файла с границами матрицы" << endl;
	cin >> name1;
	cout << "Введите имя файла для хранения матрицы" << endl;
	cin >> name2;
	cout << "Введите имя файла для хранения вектора g" << endl;
	cin >> name3;
	cout << "Введите имя файла для хранения функции u(g)" << endl;
	cin >> name4;

	pmx();
	vect();
	fug();

	return 0;
}
