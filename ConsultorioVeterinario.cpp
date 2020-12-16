#include<stdio.h> //puts , gets, scanf, printf, y otras funciones
#include<stdlib.h> //system(..) y otras funciones
#include<string.h>
# include "Clave.h" //Libreria para Contraseña

//typedef char cadena[80];.  // Define un nuevo tipo de dato


//Esta parte es la structura del Modulo consultorio 

struct Fecha  
{
	int dd;
	int mm;
	int aaaa;
	
};



struct Veterinario
{
	int Matricula;
	char ContraseniaVet[10];
	char ApellyNomVet[60];
	int DNIVet;
	char TelefonoVet[25];
	bool borrado;                 //borrado
};

struct Mascota 
{
    char ApellyNomMascot[60];
	int DNIDueno;
	char TelefonoMascota[25];
	char Localidad[60];
	Fecha Nacimiento;
	float PesoMascot;
	bool borradoM;
};


struct turnos{                          // En Proceso 
	int MatriculaVet,dni;
	struct Fecha fecha;
	char DetAt[380];
};

void ModuloConsultorio();
void MenuPrincipal();
int Menu();
void RegistrarTurnos(FILE*turnos);
void ListarTurnos(FILE *archiT);
void RegistraEvolucion(FILE*turnos); 



/*void RegistraEvolucion(FILE*turnos){
	char NombreA[20],evolucion[380];
	system("cls");
	_flushall();
	printf("\n Digite el nombre de la mascota que decea registrar evolucion: ");gets(NombreA);
	rewind(turnos);
	rewind(mascotas);
	turnos=fopen("Turnos.dat","r+b");
	mascotas=fopen("Mascotas.dat","r+b");
	fread(&tur,sizeof(Turnos),1,turnos);
	fread(&mascot,sizeof(Mascota),1,mascotas);
	while(!feof(turnos)){
		while(!feof(mascotas)){
			if(strcmp(mascot.ApellidoNombre,NombreA)==0){
				printf("\n Digite la evolucion de la mascota %s: ",mascot.ApellidoNombre);gets(evolucion);
				strcpy(tur.DetAt,evolucion);	
			}
			fread(&mascot,sizeof(Mascota),1,mascotas);
		}
		fread(&tur,sizeof(Consultorio),1,turnos);
	}
	fclose(turnos);
	getch();
}						
void VisualizarTurnos(FILE*turnos){
	char busN[100];
	_flushall();
	printf("\n Digite el nombre y apellido que decea buscar: ");gets(busN);
	rewind(turnos);
	rewind(mascotas);
	turnos=fopen("Turnos.dat","r+b");
	mascotas=fopen("Mascotas.dat","r+b");
	fread(&tur,sizeof(Turnos),1,turnos);
	fread(&mascot,sizeof(Mascota),1,mascotas);
	while(!feof(turnos)){
		while(!feof(mascotas)){
			if(strcmp(busN,mascot.ApellidoNombre)==0){
				printf("\n Turno %d",j+1);
				printf("\n Matricula: %d",tur.MatriculaVet);
				printf("\n Fecha actual: %d/%d/%d",tur.fecha.dd,tur.fecha.mm,tur.fecha.aa);
				printf("\n Dni: %d",tur.dni);
				j++;
			}
			fread(&mascot,sizeof(Mascota),1,mascotas);
		}
		fread(&tur,sizeof(Turnos),1,turnos);	
	}
	fclose(turnos);
	getch();
}	

*/


int Menu()
{

	//system("color 5"); //puse el color purpura o rosa para el programa se lo puede cambiar
	//system("cls");	
	
	int opcion = 0;
	
	printf("\n------------------------------------\n");
	printf("        VETERINARIA  GAPUSAGA        ");
	printf("\n------------------------------------\n")
	printf("\n\t\t\t\t\t\t\t*********************************************************");
	printf("\n\t\t\t\t\t\t\t**********Modulo Consultorio Veterinario*****************\n");
	printf("\t\t\t\t\t\t\t**********************************************************\n");
	printf("\n\t\t\t\t\t\t\t**\n 1 - Iniciar Sesion\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 2 - Visualizar Lista de Espera de Turnos\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 3 - Registrar Evolución de la Mascota\t\t\t\t\t\t**\t");
        printf("\n\t\t\t\t\t\t\t**\n 4 - Cerrar la aplicacion \t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\t\t\t\t\t\t\t**********************************************************\n");
	printf("\n\n\t\t\t\t\t\t\t**\t - Ingrese una opcion: ");
	//scanf("%d", &opc);
	
	printf("\n0- Salir");//
	printf("\n\nOpcion: ");
	scanf("%d", &opcion);
	
	return opcion;
	
}

void ListarTurno(FILE *archiT) //LISTAR TURNOS
{
	Turno regiTurno;
	
	//Paso 1 - Rebobinar el archivo
	rewind(archiT);
	//fseek(archi, 0, SEEK_SET);


	//Paso 2 - Intentar extraer el primer registro del archivo
	fread(&regiTurno, sizeof(regiTurno), 1, archiT);
	
	//Paso 3 - Mientras no sea FIN DE ARCHIVO
	while ( !feof(archiT) )
		//Paso 4 - Procesar / Gestionar el registro actual
	{
		
		if (regiTurno.borradoT == false)
		//if (!regi.borrado)
		{
			
			printf("\n  DATOS DEL TURNO   \n");
			printf("\nMatricula del Veterinario %s", regiTurno.Matricula);
			printf("\nFecha de Turno : %d/%d/%d\n\n", regiTurno.Fech.dd, regiTurno.Fech.mm, regiTurno.Fech.aaaa); 
			printf("\nNro de DNI del Dueno: %d", regiTurno.DNIdueno);
		//	printf("\nEvolución de la Mascota : %s", regiTurno.DetAtencion);
			
		}
		
		
		// Paso 5 - Intentar extraer EL SIGUIENTE registro del archivo
		fread(&regiTurno, sizeof(regiTurno), 1, archiT);
		
	} 
	
}




main()
{
	FILE *archTurno;
	
	archTurno = fopen("Turnos.dat", "r+b");
	
	if (archTurno == NULL)
	{
		printf("El archivo no existe, ...");
	}
	
	
	int opc = 0;
	do 
	{
		
		system("cls");
		opc = Menu();
		system("cls");
		
		switch ( opc )
		{
			
			case 1:
				{
					printf("En proceso...");
				
					break;
				}

			case 2:
				{
					printf("Visualizar lista de espera de Turnos\n\n");
					ListarTurno (archTurno);
					
					break;
				}

			case 3:
				{
					printf("Registrar Evolucion de la Mascota\n");
					
					
					break;
				}

			case 4:
				{
					printf("Cerrar la aplicacion\n");

					
					break;
				}


			case 0:
				{
					printf("Fin del programa...");
					break;
				}

			default:
				{
					printf("Opcion incorrecta...");
					break;
				}

			
		}; // switch
			
		printf("\n\n");
		system("pause");
		
	} while ( opc != 0);
	
	
}

