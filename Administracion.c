#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char cadena[80];


	
	
	
bool validarPass(cadena pass);

bool validarConsecutivasPass(cadena pass);



struct Fecha
{
	int dd, mm, aaaa;
}

struct Veterinario
	
{
     int matricula;
     int
     
}

int Menu() 
{ 
	int opc = 0; 

        	system ( " cls " );
	
        printf ( " \ n --------------------------------------------- -------- \ n " );
	printf ( "           VETERINARIA GAPUSAGA        " );
	printf ( " \ n --------------------------------------------- --------- \ n " );
	printf ( " BIENVENIDO AL AREA RECEPCIÓN " );
	printf("\n\t\t\t\t\t**********************************************************");
	printf("\n\t\t\t\t\t\t***************Modulo Administración**********************\n");
	printf("\t\t\t\t\t\t\t**********************************************************\n");
	printf("\n\t\t\t\t\t\t\t**\n 1 - Registrar Veterinario \t\t\t\\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 2 - Registrar Usuario Asistente \t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 3 - Atenciones por Veterinarios\t\t\t\t\t\tt\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 4 - Ranking de Veterinarios por Atenciones\t\t\t\t**\t"); 
        printf("\n\t\t\t\t\t\t\t**\n 5 - Cerrar la Aplicacion  \t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\t\t\t\t\t\t\t\t***********************************************************\n");
	printf("\n\n\t\t\t\t\t\t\t**\n - Ingrese una opcion: ");
	scanf("%d", &opc); 
	 
	return opc; 
}

main(){
	cadena pass;
	do{
		printf("ingrese una password valido: ");
		_flushall();
		gets(pass);			
	}while(!validarPass(pass));	
	printf("pass Valido!");
}

//"dA122dAoPFmk"

bool validarPass(cadena pass){
	int may = 0, min = 0, num = 0, otros = 0, numcons = 0;
	
	for(int i=0; i<strlen(pass); i++){
		if (pass[i] >='A' && pass[i] <='Z'){
			may++;
			numcons = 0;		
		}
	}
}
