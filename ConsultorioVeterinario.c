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

int opc=0,opp=0,j=0,i=0,band=0,acceso=0;
char op;

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
			case 2:{
				//ModAsistente();
			break;}
			case 3:{
				//ModAdmin();
			break;}
			case 4:{
				//Mensaje de error;
			break;}
		}
	}while(opp!=4);
}
void ModuloConsultorio(){
	do{
			Menu();
			switch(opc){
			case 1:{


				
				
				
				
				
				
				
				
void Menu()
{
	system("color 5"); //puse el color purpura o rosa para el programa se lo puede cambiar
	system("cls");
	
	printf("Modulo Consultorio Veterinario");
	printf("\n----\n");
	printf("\n 1 - Iniciar Sesion");
	printf("\n 2 - Visualizar Lista de Espera de Turnos");
	printf("\n 3 - Registrar Evolución de la Mascota");
        printf("\n 4 - Cerrar la aplicacion ");
	printf("\n\n Ingrese una opcion: ");
	scanf("%d", &opcion);
	
	return opcion;
}

				
	
