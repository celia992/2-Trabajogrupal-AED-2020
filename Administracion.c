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
