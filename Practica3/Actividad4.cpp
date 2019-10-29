#include "Actividad4.h"
#include <mkl_cblas.h>
#include <cstdio>

#define M 3
#define N 3
#define LAYOUT CblasRowMajor
#define notr CblasNoTrans
#define tr CblasTrans 
void Actividad4::execute()
{
	double mA[M * N] = { 3, 2 ,1, 6, 5, 4, 9, 8, 7 };
	double mB[M * N] = { 3, 2 ,1, 6, 5, 4, 9, 8, 7 };
	double mC[M * N] = { 3, 2 ,1, 6, 5, 4, 9, 8, 7 };

	double dummy[M * N] = { 0, 0 ,0, 0, 0, 0, 0, 0, 0 };

	//A*B
	cblas_dgemm(LAYOUT, notr, notr, M, N, 3, 1, mA, 3, mB, 3, 0, dummy, 3);

	//A*Bt	
	cblas_dgemm(LAYOUT, notr, tr, M, N, 3, 1, mA, 3, mB, 3, 0, dummy, 3);

	//2*A*B + 3*C
	cblas_dgemm(LAYOUT, notr, notr, M, N, 3, 2, mA, 3, mB, 3, 3, mC, 3);
}
