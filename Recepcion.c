#include <stdio.h>
#include <stdlib.h> 
# include <string.h>


typedef char cadena[32];

bool validarPass(cadena pass);

bool validarConsecutivasPass(cadena pass);

FILE*turnos;



FILE*mascotas;

struct Fecha{
int dd,mm,aaaa;	
}fecha;

struct mascota{
	char ApellidoNombre[60],Domicilio[60],Localidad[60],Telefono[25];
	int Dni;
	struct FechaNacimiento fech;
	float Peso;
}mascot;
struct Turnos{
	int MatriculaVet,dni; 
 	struct Fecha fecha;   
	char DetAt[380];
}tur;

void RegistrarTurnos(FILE*turnos){
	turnos=fopen("Turnos.dat","a+b");
	
	
	
	
	
int Menu()
{
	int opcion = 5;
	system("color 5");
	system("cls");
	printf("\n\t\t\t\t\t\t\t*********************************************************");
	printf("\n\t\t\t\t\t\t\t******************Modulo de Recepcion********************\n");
	printf("\t\t\t\t\t\t\t**********************************************************\n");
	printf("\n\t\t\t\t\t\t\t**\t 1 - Iniciar Sesion\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\t 2 - Registrar Mascota\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\t 3 - Registrar Turno \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\t 4 - Listado de Atenciones por Veterinario y Fecha\t\t**\t");
        printf("\n\t\t\t\t\t\t\t**\t 5 - Cerrar la aplicacion \t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\t\t\t\t\t\t\t\t************************************************************\n");
	printf("\n\n\t\t\t\t\t\t\t**\t - Ingrese una opcion: ");
	scanf("%d", &opc);
	
	return opc;
}

	
	

	
