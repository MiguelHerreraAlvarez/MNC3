#include <stdio.h>
#include <iostream>
#include <mkl.h>

#include "Actividad2.h"

#define N1 3
#define N2 10
void Actividad2::actividad2()
{
	int n, incv1 = 1, incv2 = 1;

	n = N1;
	double v1[N1] = { 1,0,0 };
	double v2[N1] = { 0,1,0 };

	printf("Producto escalar de dos vectores ortogonales: (%d)\n", cblas_ddot(n, v1, incv1, v2, incv2));


	double vN[N2] = { int('d'), int('a'), int('n'), int('i'), int('e'), int('l'), 0, 0, 0 };
	double vA[N2] = { int('d'), int('e'), int('l'), int('g'), int('a'), int('d'), int('o'), 0, 0, 0 };
	n = N2;
	cblas_daxpy(n, 3, vA, incv1, vN, incv2);

	for (size_t i = 0; i < n; i++) {
		std::cout << vN[i] << ' ';
	}
	std::cout << '\n';


	double vF[N1] = { 15, 5, 1998 };
	n = N1;

	int res = int(cblas_dnrm2(n, vF, 1)) % 11;

	printf("Nuestra nota en MNC es: (%i)\n", res);
}
