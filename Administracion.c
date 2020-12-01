#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char cadena[80];

struct Fecha
{
	int dd;
	int mm;
	int aaaa;
}


int Menu() 
{ 
	int opcion = 0; 
	 
	printf("Modulo administración"); 
	printf("\n----\n");
        printf("\n1- Registrar veterinario"); 
	printf("\n2- Registrar usuario asistente"); 
	printf("\n3- Atenciones por veterinarios"); 
	printf("\n4- Ranking de veterinarios por atenciones"); 
	printf("\n0- Cerrar la aplicacion "); 
	printf("\n\nOpcion: "); 
	scanf("%d", &opcion); 
	 
	return opcion; 
}
