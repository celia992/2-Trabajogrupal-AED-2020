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
	 printf("\n\t\t\t\t\t\**********************************************************");
	printf("\n\t\t\t\t\t\t***************Modulo Administración**********************\n");
	printf("\t\t\t\t\t\t\t**********************************************************\n");
	printf("\n\t\t\t\t\t\t\t**\t 1 - Registrar Veterinario \t\t\t\\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\t 2 - Registrar Usuario Asistente \t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\t 3 - Atenciones por Veterinarios\t\t\t\t\t\tt\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\t 4 - Ranking de Veterinarios por Atenciones\t\t\t\t**\t"); 
        printf("\n\t\t\t\t\t\t\t**\t 5 - Cerrar la Aplicacion  \t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\t\t\t\t\t\t\t\t***********************************************************\n");
	printf("\n\n\t\t\t\t\t\t\t**\t - Ingrese una opcion: ");
	scanf("%d", &opc); 
	 
	return opc; 
}
