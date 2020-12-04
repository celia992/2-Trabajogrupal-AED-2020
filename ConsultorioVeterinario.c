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
			char password[20],Matricula[20];
				printf("\n Digite su numero de matricula: ");scanf("%d",&Matricula);
				_flushall();
				printf("\n Digite su password: ");gets(password); //PASSWORD ES LA CONTRASEÑA 

	break;}
			case 2:{
				if(acceso==1){
					VisualizarTurnos(turnos);	
				}else{
					system("cls");
					printf("\n Acceso denagado... Antes debe iniciar sesion\n\n");
					system("pause");
				}
			break;}
			case 3:{
				if(acceso==1){
					RegistraEvolucion(turnos);
				}else{
					system("cls");
					printf("\n Acceso denagado... Antes debe iniciar sesion\n\n");
					system("pause");
				}
			break;}
			case 4:{
				if(acceso==1){
					system("cls");
					printf("\n Aplicacion finalizada");
				}else{
					system("cls");
					printf("\n Acceso denagado... Antes debe iniciar sesion\n\n");
					system("pause");
				}
			break;}
			default:{
				system("cls");
				printf("\n Se produjo un error solo debe ingresar las opciones que aparecen en el menu\n\n");
				system("pause");
			break;}
		}
	}while(opc!=4);
				
				
				
				
				
				
				
				
void Menu()
{
	system("color 5"); //puse el color purpura o rosa para el programa se lo puede cambiar
	system("cls");
	
	printf("\n\t\t\t\t\t\t\t*********************************************************");
	printf("\n\t\t\t\t\t\t\t**********Modulo Consultorio Veterinario*****************\n");
	printf("\t\t\t\t\t\t\t**********************************************************\n");
	printf("\n\t\t\t\t\t\t\t**\t 1 - Iniciar Sesion\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\t 2 - Visualizar Lista de Espera de Turnos\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\t 3 - Registrar Evolución de la Mascota\t\t\t\t\t\t**\t");
        printf("\n\t\t\t\t\t\t\t**\t 4 - Cerrar la aplicacion \t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\t\t\t\t\t\t\t**********************************************************\n");
	printf("\n\n\t\t\t\t\t\t\t**\t - Ingrese una opcion: ");
	scanf("%d", &opc);
	
	return opc;
}

				
	
