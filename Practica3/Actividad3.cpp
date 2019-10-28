#include <iostream>
#include <mkl.h>

#include "Actividad3.h"

#define N 3
#define M 3
#define LAYOUT CblasRowMajor
#define TRANS CblasNoTrans
void Actividad3::actividad3()
{
	double ma[M*N] = { 3, 2 ,1, 6, 5, 4, 9, 8, 7};

	double alpha = 3;
	double beta = 4;
	
	double v1[N] = { 2, 1, 3};
	double v2[N] = { 5, 4, 6};


	
	cblas_dgemv(LAYOUT, TRANS, M, N, alpha, ma, 3, v1, 1, beta, v2, 1);

	for (size_t i = 0; i < N; i++) {
		std::cout << v2[i] << ' ';
	}
}
