#include <stdio.h>
#include <stdlib.h> 
# include <string.h>

struct Fecha


{

	int dd,mm,aaaa;

};
struct mascota
{
	
}
int Menu()
{
	int opcion = 0;
	system("color 5");
	system("cls");
	printf("Modulo de Recepcion");
	printf("\n 1 - Iniciar Sesión");
	printf("\n 2 - Registrar Mascota");
	printf("\n 3 - Registrar Turno");
	printf("\n 4 - Listado de Atenciones por Veterinario y Fecha");
        printf("\n 0 - Cerrar la aplicacion ");
	printf("\n\n Ingrese una opcion:: "); 
	scanf("%d", &opc);
	
	return opc;
}
