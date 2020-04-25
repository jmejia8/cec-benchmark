// Compile: gcc -shared -fpic -lm -Wall -Ofast -march=native  cfunctions.c -o cfunctions.so

#include "cec17_test_func.h"


double *OShift,*M,*y,*z,*x_bound;
int ini_flag=0,n_flag,func_flag,*SS;
char* dataDir;

void cec17_func(double* x, double* f, char* dir, int n, int m, int func_num){
	dataDir = dir;
	cec17_test_func(x, f, n, m, func_num);
}
