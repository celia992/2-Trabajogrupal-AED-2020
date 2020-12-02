#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char cadena[80];

struct Fecha
{
	int dd, mm, aaaa;
}


int Menu() 
{ 
	int opc = 0; 
	 
	printf("Modulo Administración"); 
	printf("\n----\n");
        printf("\n 1 - Registrar Veterinario"); 
	printf("\n 2 - Registrar Usuario Asistente"); 
	printf("\n 3 - Atenciones por Veterinarios"); 
	printf("\n 4 - Ranking de Veterinarios por atenciones"); 
	printf("\n 0 - Cerrar la aplicacion "); 
	printf("\n\n Ingrese una opcion: "); 
	scanf("%d", &opc); 
	 
	return opc; 
}
