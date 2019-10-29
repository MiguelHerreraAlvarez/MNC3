#include "Actividad5.h"
#include <mkl_cblas.h>
#include <cmath>
#include <ctime>
#include <mkl.h>
#include <mkl_service.h>
#include <iostream>

#define LAYOUT CblasRowMajor
#define notr CblasNoTrans
#define tr CblasTrans
#define RAND_MAX 100
void Actividad5::execute(int N)
{
	srand((unsigned int)time(NULL));
	
	double *A = (double*)mkl_malloc(N * N * sizeof(double), 64);
	double *B = (double*)mkl_malloc(N * N * sizeof(double), 64);
	double *C = (double*)mkl_malloc(N * N * sizeof(double), 64);

	for (int i = 0; i < N * N; ++i)
	{
		A[i] = (double)rand() / (double)RAND_MAX;
	}

	for (int i = 0; i < N * N; ++i)
	{
		B[i] = (double)rand() / (double)RAND_MAX;
	}

	for (int i = 0; i < N * N; ++i)
	{
		C[i] = (double)rand() / (double)RAND_MAX;
	}

	int nOp = 2 * N ^ 3;
	double t;
	t = dsecnd();
	for (int i = 0; i < 100; ++i)
	{
		cblas_dgemm(LAYOUT, notr, notr, N, N, N, 1, A, N, C, N, 0, C, N);
	}
	t = dsecnd() - t;
	std::cout << t / 100 * 2 * N * N * N << "flops" << '\n';

	mkl_free(A);
	mkl_free(B);
	mkl_free(C);
}