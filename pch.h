#ifndef PCH_H
#define PCH_H
extern int n;

struct Complex
{
	double re;
	double im;
};
extern struct Complex **mx,*vc,g;
#endif
#ifndef matrix
#define matrix

void pmx();
#endif 
#ifndef vec
#define vec

void vect();
#endif 
#ifndef fu
#define fu

void fug();
#endif 
