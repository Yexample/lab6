#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <fstream>

extern int n;
extern char name2[90], name3[90];
using namespace std;

void vect() {
	vc = new Complex[n + 1];
	int i, j, jj, ii;
	Complex *ch;
	ch = new Complex[n + 1];
	for (i = 1; i <= n; i++) {
		ch[i].re = 0;
		ch[i].im = 0;
		vc[i].re = 0;
		vc[i].im = 0;
	}
	Complex mxch;
	int s = 1;
	cout << endl;
	if (n > 1) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				ch[s].re = ch[s].re + abs(mx[i][j].re);
				ch[s].im = ch[s].im + abs(mx[i][j].im);
				
			}
			
			s++;
		}
		cout << endl;
		for (i = 1; i <= n; i++) {
			mxch.re = ch[i].re;
			mxch.im = ch[i].im;
			for (j = i+1; j <= n; j++) {
				if (ch[j].re >= mxch.re) { 
					
					if (ch[j].re != mxch.re) {
						mxch.re = ch[j].re;
						mxch.im = ch[j].im;
						ii = j;
						
					}
					else
					{
						if (ch[j].im >= mxch.im) {
							mxch.re = ch[j].re;
							mxch.im = ch[j].im;
							ii = j;
						
						}
					}
				}
				
			}
		}	
		int k = 2;
		for (j = 1; j <= n; j++) {
			if (j - k+n > n) {
				vc[j - k].re = mx[ii][j].re;
				vc[j - k].im = mx[ii][j].im;
			}
			else
			{
				vc[j - k + n].re = mx[ii][j].re;
				vc[j - k + n].im = mx[ii][j].im;
			
			}
		}
	}
	else
	{
		vc[1].re = mx[1][1].re;
		vc[1].im = mx[1][1].im;
	}
	ofstream fin3;
	fin3.open(name3);
	for (i = 1; i <= n; i++) {
		fin3 << vc[i].re << " + " << vc[i].im << "i\t";
	}
	for (i = 1; i <= n; i++) {
		cout <<"Vector : "<<endl<< vc[i].re << " + " << vc[i].im << "i\t";
	}

	cout << endl;
	fin3.close();
}
