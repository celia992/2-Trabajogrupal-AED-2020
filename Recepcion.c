#include <stdio.h>
#include <stdlib.h> 
# include <string.h>


typedef char cadena[32];

bool validarPass(cadena pass);

bool validarConsecutivasPass(cadena pass);

FILE*turnos;
FILE*mascotas;

struct Fecha
{
int dd,
int mm;
int aaaa;	
};

struct mascota{
	char ApellidoNombre[60],Domicilio[60],Localidad[60],Telefono[25];
	int DNIdueno;
	Fecha FechaNacimiento;
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
	
	printf("\n\t\t\t\t\t\t\t**\n 1 - Registrar Mascota\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 2 - Registrar Turno \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
        printf("\n\t\t\t\t\t\t\t**\n 3-  Pago de Contado y a Credito");
	printf("\n\t\t\t\t\t\t\t**\n 4 - Listado de Atenciones por Veterinario y Fecha\t\t**\t");
        printf("\n\t\t\t\t\t\t\t**\n 5 - Cerrar la aplicacion \t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
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
		
	if  //(mascota)    -preguntar a los profes por esta condicion
	{break;
	}
		printf("Error. Solo valores de 6 digitos sin puntos \n\n");
		
	} while (true)
		
		 regi.DNIdueno = Mascota;
		
	printf("Nombre de la mascota ");
	_flushall();
        gets
		
	printf("Numero Factura: ");
	scanf("%d", &regi.nroPago);
	
	printf("Importe Factura: ");
	scanf("%f", &regi.importePago);
	
	do
	{
	
		if
		{
		}
	} While

	main()

{
	
	FILE *archivo;
	
	int opc = 0;

	int mes = 0;
		
	cadena nombreMascota;
		
	archivo = fopen(" ")
} 
