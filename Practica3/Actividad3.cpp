#include <iostream>
#include <mkl.h>

#include "Actividad3.h"

#define N 3
#define M 3
#define LAYOUT CblasRowMajor
#define TRANS CblasNoTrans
void Actividad3::execute()
{
	double ma[M*N] = { 3, 2 ,1, 6, 5, 4, 9, 8, 7};
	
	double v1[N] = { 2, 1, 3};
	double v2[N] = { 5, 4, 6};

	double dummy[N] = { 0, 0, 0 };

	//Punto 1
	
	cblas_dgemv(LAYOUT, TRANS, M, N, 1, ma, 3, v1, 1, 0, dummy, 1);
	
	for (double i : dummy)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';
	
	//Punto 2
	
	double alpha = 3;
	double beta = 4;
	
	cblas_dgemv(LAYOUT, TRANS, M, N, alpha, ma, 3, v1, 1, beta, v2, 1);

	for (double i : v2)
	{
		std::cout << i << ' ';
	}
}
