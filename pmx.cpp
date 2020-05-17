#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <complex>
#include <string>
#include <vector>
#include <fstream>

extern Complex **mx;
extern int n;
extern char name1[90], name2[90];
using namespace std;

void pmx() {

	int i, j;

	ifstream fin1;
	fin1.open(name1);
	if (!fin1.is_open()) {
		while (!fin1.is_open()) {
			cout << "Введено неверное имя файла" << endl;
			memset(&name1[0], 0, sizeof(name1));
			cin >> name1;
			fin1.open(name1);
		}
	}
	fin1 >> n;
	
	mx = new Complex*[n + 1];

	for (i = 1; i <= n; i++) {
		mx[i] = new Complex[n + 1];

	}
	cout << "Matrix :" << endl;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			mx[i][j].re = (pow(2,i)/((i-5.0/2.0)*pow(i,2)))*(2-pow((j-5),2));
			mx[i][j].im = ((2*i)/j)+1;
			cout << mx[i][j].re << " + " <<  mx[i][j].im  << "i" <<"\t";
		}
		cout << endl;
	}
	fin1.close();
	ofstream fin2;
	fin2.open(name2);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			fin2 << mx[i][j].re << " + " << mx[i][j].im  << "i"<<"\t";
		}
		fin2 << endl;
	}
	cout << endl;
	fin2.close();
}

