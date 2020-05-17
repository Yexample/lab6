#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <complex>
#include <string>
#include <vector>
#include <fstream>

extern Complex *vc;
extern int n;
extern char name4[90];
using namespace std;

void fug() {
	int i, k = 0;

	g.re = 1;
	g.im = 1;
	if (n != 1) {
		for (i = 1; i <= n - 1; i++) {
			if ((abs(vc[i].re + 1) != 0) && vc[i].re != 0) {
				g.re = g.re * (1.0 / (abs(vc[i].re + 1.0) + 1.0) + vc[i + 1].re);
				g.im = g.im * (1.0 / (abs(vc[i].im + 1.0) + 1.0) + vc[i + 1].im);
			}
			else
			{
				i = n;
				k = 1;
			}
		}
	}
	else
	{
		g.re = g.re * (1.0 / (abs(vc[i].re + 1.0) + 1.0));
		g.im = g.im * (1.0 / (abs(vc[i].im + 1.0) + 1.0));
	}
	ofstream fin4;
	fin4.open(name4);
	if (k != 1) {
		fin4 << g.re << " + " << g.im << "i";
		cout << "g=" << g.re << " + " << g.im << "i" << endl;
	}
	else
	{
		fin4 << "Число не существует, деление на 0";
		cout << "Число не существует, деление на 0";

	}
	
	fin4.close();
}
