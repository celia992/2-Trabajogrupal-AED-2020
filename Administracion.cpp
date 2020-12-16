#include <stdio.h>    //puts, scanf, printf, y otras funciones
#include <stdlib.h>   //sytem(..) y otras funciones 
#include <string.h>   //strcpy, strlwr, stren, strcat, strcat y otras funciones 
#include "Clave.h" //Libreria para Contraseña


struct Fecha            // LA ESTRUCTURA 
{
	int dd;          //Con sus campos
	int mm;
	int aaaa;
}

struct Mascota 
{
    char ApellyNomMascot[60];
	int DNIDueno;
	char TelefonoMascota[25];
	char Localidad[60];
	Fecha Nacimiento;
	float PesoMascot;
	bool borradoM;                 //Campo extra para BAJA LOGICA. Actua como bandera
	                               
};


struct Veterinario
	
{
     char Matricula;
     char ContraseniaVet[10];
     int DNIVet;
     char ApellyNomVet[60];
     char TelefonoVet[25];
     bool borrado;                    //borrado

}

struct Asistente
{
	char ContraseniAsis[10];
	int DNIAsis;
	char ApellyNomAsis[60];
	char TelefonoAsis[25];	
	bool borradoA;
};

struct Turno
{
	Veterinario Matricula;
	Fecha Fech;
	Mascota DNIdueno;
	bool borradoT;
};    
  

int Menu();
void AgregarVeterinario(FILE *archi);
void AgregarAsistente(FILE *archiv);
void ListarVeterinario(FILE *archi);
void ListarAsistente(FILE *archiv);
int CalcularTurnosMes(FILE *archi, int mes);



int Menu() 

{ 
	int opcion = 0; 

        system ( " cls " );
	
        printf ( " \n ---------------------------------------------------- \n");
	printf ( "           VETERINARIA GAPUSAGA        ");
	printf ( " \n ------------------------------------------------------ \n" );
	printf("\n\t\t\t\t\t**********************************************************");
	printf("\n\t\t\t\t\t\t**************  BIENVENIDO AL AREA ADMINISTRACIÓN  *******************\n");
	printf("\t\t\t\t\t\t\t**********************************************************\n");
	printf("\n\t\t\t\t\t\t\t**\n 1 - Registrar Veterinario \t\t\t\\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 2 - Registrar Usuario Asistente \t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 3 - Atenciones por Veterinarios\t\t\t\t\t\tt\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 4 - Ranking de Veterinarios por Atenciones\t\t\t\t**\t"); 
        printf("\n\t\t\t\t\t\t\t**\n 5 - Ver el listado de los Veterinarios\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 6 - Ver el listado de los Asistentes\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 0 - Salir  \t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\t\t\t\t\t\t\t\t***********************************************************\n");
	printf("\n\n\t\t\t\t\t\t\t**\n - Ingrese el número de la opcion: ");
	scanf("%d", &opcion); 
	 
	return opcion; 
}

  
    //                                         ALTA DEL VETERINARIO

void AgregarVeterinario(FILE *archi)  //el parametro que recibe la función es archivo

{
	Veterinario regi; //regi es la variable  de tipo struc
	
	printf("MATRICULA del Veterinario: ");
	scanf("%d", &regi.Matricula);
	
	 do{
	
	printf("Contraseña  del Veterinario: ");
	_flushall();
	gets ( regi.ContraseniaVet);
        } while(!validarContrasnia(regi.ContraseniaVet));
	
	printf("Apellido y Nombre del Veterinario: ");
	gets ( regi.ApellyNomVet);
	
	printf("DNI del Veterinario: ");
	scanf("%d", &regi.DNIVet);
	
	_flushall();
	printf("Telefono ");
	gets(regi.TelefonoVet);
	
	regi.borrado= false;
	
	fseek (archi, 0, SEEK_END);
        fwrite (&regi, sizeof(regi), 1, archi);
	//confirmacion
}

//                             ALTA DE ASISTENTE

void AgregarAsistente(FILE *archiv)  
{
	Asistente registro; //regi es la variable  de tipo struc
	
	printf("DNI del Asistente: ");
	scanf("%d", &registro.DNIAsis);
	
	
	 do{
	
	printf("Contraseña  del Asistente: ");
	_flushall();
	gets ( registro.ContraseniAsis);
	} while(!validarContrasniaA(registro.ContraseniAsis));
		 
		 
	printf("Apellido y Nombre del Asistente: ");
	gets ( registro.ApellyNomAsis);
	
	printf("Telefono ");
	gets(registro.TelefonoAsis);
	
	registro.borradoA= false;
	
	fseek (archiv, 0, SEEK_END);
	fwrite (&registro, sizeof(registro), 1, archiv);
	//confirmacion

}


//                              LISTAR VETERINARIO

void ListarVeterinario(FILE *archi)  
{
	Veterinario regi;
	
	//Paso 1 - Rebobinar el archivo
	rewind(archi);
	//fseek(archi, 0, SEEK_SET);


	//Paso 2 - Intentar extraer el primer registro del archivo
	fread(&regi, sizeof(regi), 1, archi);
	
	//Paso 3 - Mientras no sea FIN DE ARCHIVO
	while ( !feof(archi) )
	
	
		//Paso 4 - Procesar / Gestionar el registro actual
	{
	
		
		if (regi.borrado == false)
		{
		   	printf("\nNro de Matricula: %d", regi.ContraseniaVet);
			printf("\nApellido y Nombre del Veterinario: %s", regi.ApellyNomVet);
			printf("\nNro de DNI: %d", regi.DNIVet);
			printf("\nTelefono: %s", regi.TelefonoVet);
			
		}
		
		// Paso 5 - Intentar extraer EL SIGUIENTE registro del archivo
		fread(&regi, sizeof(regi), 1, archi);
	}
}


void ListarAsistente(FILE *archiv)
{
	Asistente registro;
	
	//Paso 1 - Rebobinar el archivo
	rewind(archiv);
	//fseek(archi, 0, SEEK_SET);
		//Paso 2 - Intentar extraer el primer registro del archivo
	fread(&registro, sizeof(registro), 1, archiv);
	
	//Paso 3 - Mientras no sea FIN DE ARCHIVO
	while ( !feof(archiv) )
	 
	
	{
	
		//Paso 4 - Procesar / Gestionar el registro actual
		
		if (registro.borradoA == false)
		//if (!regi.borrado)
		{
			
			printf("\nNro de DNI: %d", registro.DNIAsis);
		//	printf("\nNro de DNI: %s", registro.ContraseniAsis);
			printf("\nApellido y Nombre del Asistente: %s", registro.ApellyNomAsis);
			printf("\nTelefono: %s", registro.TelefonoAsis);
			
			
		//	printf("\nFecha Venta: %d/%d/%d\n\n", regi.fechaVenta.dd, regi.fechaVenta.mm, regi.fechaVenta.aaaa);
		}
		
		
		// Paso 5 - Intentar extraer EL SIGUIENTE registro del archivo
		fread(&registro, sizeof(registro), 1, archiv);
		
	} // while
	
}

/*int CalcularTurnosMes(FILE *archiT, int TurnoMes)  //en proceso
{
	int total = 0;
	
	Turno regiTurno;
	
	rewind (archiT); //Paso 1 rebobinar el archivo
	
	fread(&regiTurno, sizeof(regiTurno), 1, archiT);   //Paso 2  - intentar extraer el primer registro del archivo
	
	while (!feof(archiT))   //Paso 3  -  mientras no sea FIN DE ARCHIVO 
	{
		if (regiTurno.borradoT == false)   // Paso 4 -  procesar / gestionar el registro actual
		{
		    if (regiTurno.Fech.mm == TurnoMes)	
		    {
		    	total = total + regiTurno.Matricula;
			}
		}
		
        fread(&regiTurno, sizeof(regiTurno), 1, archiT);  //paso 5 intenta extraer el siguiente registro del archivo
		fclose(archT);
	}	
	
	return total;
	
}*/



//void registrarTurnoMensual(FILE*arch1, int cantTurnos);  //Para registrar el turno mensual
//int contarMayorQue(FILE*arch1);                          //Para hacer el Ranking


}


main()

{
	
	FILE *archivo;
	FILE *archasistente;
	FILE *archTurno;
        
	int opc = 0;
	int mes = 0;
	int TotalTurnoMes = 0;
	
	archivo = fopen("Veterinario.dat", "r+b");
		
	if (archivo == NULL)
	{
		printf("El archivo no existe, se intentara crearlo...");
		
		archivo = fopen("Veterinario.dat", "w+b");
		
		if   (archivo == NULL)
		{
		    printf("Error. No se pudo crear el archivo...");
		    exit(1);
		}
		
		printf("\nArchivo creado exitosamente...\n\n");
		system("pause");
	}
	
	archasistente = fopen("Asistente.dat", "r+b");
	
	if (archivo == NULL)
	{
		printf("El archivo no existe, se intentara crearlo...");
		
		archasistente = fopen("Asistente.dat", "w+b");
		
		if (archivo == NULL)
		{
			printf("Error. No se pudo crear el archivo...");
			exit(1);
		}
		
		printf("\nArchivo creado exitosamente...\n\n");
		system("pause");
	}	
        
archTurno = fopen("Turnos.dat", "rb");
    	if (archivo == NULL)
		{
			printf("Error. No se pudo crear el archivo...");
			exit(1);
		}
	
 

  
  do
  {
	  
    system ("cls");                 //borrar pantalla
    opc = menu ();
    system ("cls");
    
    swich ( opc )
	    
    { 
    case 1:
          {
            printf ("Registrar Veterinario");
	    AgregarVeterinario (archivo);  
            
            break;
          }
   case 2:
          {
            printf ("Registrar Usuario Asistente");
            AgregarAsistente (archasistente);
		  
            break;
          }
    
   case 3:
          {
            printf ("EN PROCESO\n");
            printf ("La sección a la que el usuario quiere acceder se encuentra \n");
            printf("FUERA DE SERVICIO\n");
		  
           break;
          }
   case 4:
          {
           printf ("Ranking de Veterinario por Atenciones")
           printf("Mes: ");
           scanf("%d", &mes);
                    
                   // TotalTurnoMes = CalcularTurnosMes(archTurno, mes);
                    
                   // printf("\n total turno del mes %d;  %d", mes, TotalTurnoMes);
                    
		   
            break;
          }
   case 5:
          {
            printf ("Listado de Veterinarios Registrados  ")
            ListarVeterinario (archivo);
		 
           break;
          }
   case 6:
	{
	    printf("Ver Listado de Asistente\n");
            ListarAsistente (archasistente);
					
		break;
	  }
   case 0:
          {
            printf ("Fin del programa...");
            break;
          }
   default:
          {
            printf ("Opcion incorrecta...")
            break;
          }
	    
}; // Switch
       printf("\n\n");
       system("pause");
}
  while(opc !=0);

	
}
