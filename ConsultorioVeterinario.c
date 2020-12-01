#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

FILE*Turnos;
FILE*Mascotas;

//esta pate es la estructutura del Modulo consultorio P.B

struct Fecha{
	int dd,mm,aa;
}fecha;

struct turnos{
	int MatriculaVet,dni;
	struct Fecha fecha;
	chart DetAt[380]
}tur;

struct Consultorio{
	char ApellidoNombre[60],Telefono[25];
         int Matricula,Dni;
 }cons;

struct FechaNacimiento{
	int dd,mm,aa;
}fech;

struct Mascota{
	char ApellidoNombre[60],Domicilio[60],Localidad[60],Telefono[25];
	int Dni;
	struct FechaNacimiento fech;
	float Peso;
}mascot;

int opc=0
char 

void ModuloConsultorio();
void MenuPrincipal();
void Menu();
void RegistrarTurnos(FILE*turnos);
void VisualizarTurnos(FILE*turnos);
void RegistraEvolucion(FILE*turnos); 


int main(){
	do{
		MenuPrincipal();
		switch(opp){
			case 1:{
				ModuloConsultorio();
			break;}

int Menu()
{
	int opcion = 0;
	
	printf("Modulo Consultorio Veterinario");
	printf("\n----\n");
	
	printf("\n1- Visualizar lista de espera de Turnos");
	printf("\n2- Registrar evolución de la mascota");

	printf("\n0- Cerrar la aplicacion ");
	printf("\n\nOpcion: ");
	scanf("%d", &opcion);
	
	return opcion;
}

