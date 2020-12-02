#include <stdio.h>
#include <stdlib.h> 
# include <string.h>

struct Fecha


{

	int dd,mm;

	int aaaa;

};
struct mascota
{
	
}
int Menu()
{
	int opcion = 0;
	
	printf("Modulo de recepcion");
	printf("\n----\n");
	
	printf("\n1- Iniciar Sesión");
	printf("\n2- Registrar Mascota");
	printf("\n3- Registrar Turno");
	printf("\n4- Listado de atenciones por veterinario y fecha");

	printf("\n0- Cerrar la aplicacion ");
	printf("\n\nOpcion: "); 
	scanf("%d", &opcion);
	
	return opcion;
}
