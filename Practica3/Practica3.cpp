#include "Actividad2.h"
#include "Actividad3.h"
#include "Actividad4.h"
#include "Actividad5.h"
#include <cstdio>

int main()
{
	printf("Actividad 2\n");
	Actividad2::execute();
	printf("\nActividad 3\n");
	Actividad3::execute();
	printf("\n\nActividad 4\n");
	Actividad4::execute();
	printf("\n\nActividad 5\n");
	Actividad5::execute(50);
	Actividad5::execute(100);
	Actividad5::execute(150);

	return 0;
}
