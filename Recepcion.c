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
	int opcion = 0;

	system("cls");
	
        printf("\n-----------------------------------------------------\n");
	printf("          VETERINARIA GAPUSAGA       ");
	printf("\n------------------------------------------------------\n");
	printf("BIENVENIDO AL AREA RECEPCIÓN");
	printf("presione una de las siguientes opciones para continuar");
	printf("\n------------------------------------------------------\n");
	
	printf("\t\t\t\t\t\t\t**********************************************************\n");
	
	//printf("\n\t\t\t\t\t\t\t**\t 1 - Iniciar Sesion\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	
	printf("\n\t\t\t\t\t\t\t**\t 1 - Registrar Mascota\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\t 2 - Registrar Turno \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
        printf("\n\t\t\t\t\t\t\t**\t 3-  Pago de Contado y a Credito");
	printf("\n\t\t\t\t\t\t\t**\t 4 - Listado de Atenciones por Veterinario y Fecha\t\t**\t");
        printf("\n\t\t\t\t\t\t\t**\t 5 - Cerrar la aplicacion \t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\t\t\t\t\t\t\t\t************************************************************\n");
	
	scanf("%d", &opcion);
	
	return opcion;
}

	
void RegistrarTurno(FILE *archi)   
{
	Registro regi;
	
	int Mascota = 0;  
	
	int formaPago = 0;   

	do
	{
		printf("\n DNIDueno: ");
		printf("\n ingrese numeros de 6 digitos, sin puntos ");
		scanf("%d", &Mascota);
	
	} while

	
