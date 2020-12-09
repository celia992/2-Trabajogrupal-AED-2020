#include <stdio.h>    //puts, scanf, printf, y otras funciones
#include <stdlib.h>   //sytem(..) y otras funciones 
#include <string.h>   //strcpy, strlwr, stren, strcat, strcat y otras funciones 

/*---Define un nuevo tipo de dato. De tipo global, asi se utiliza en todas las funciones que la necesite*/

typedef char cadena[80]; //Define un vector de 80. Almacena apellido y nombre.
	
bool validarPass(cadena pass);

bool validarConsecutivasPass(cadena pass);



struct Fecha
{
	int dd;
	int mm;
	int aaaa;
}

struct Veterinario
	
{
     char matricula;
     int DNI;
     char [25] ApellidoNobre;
     Fecha fechaturno;
     chat nombreyapMasc;

}

void registrarTurnoMensual(FILE*arch1, int cantTurnos);  //Para registrar el turno mensual
int contarMayorQue(FILE*arch1);                          //Para hacer el Ranking

int Menu() 

{ 
	int opc = 0; 

        system ( " cls " );
	
        printf ( " \n ---------------------------------------------------- \ n " );
	printf ( "           VETERINARIA GAPUSAGA        " );
	printf ( " \n ------------------------------------------------------ \ n " );
	printf ( " BIENVENIDO AL AREA ADMINISTRACIÓN " );
	printf("\n\t\t\t\t\t**********************************************************");
	printf("\n\t\t\t\t\t\t***************Modulo Administración**********************\n");
	printf("\t\t\t\t\t\t\t**********************************************************\n");
	printf("\n\t\t\t\t\t\t\t**\n 1 - Registrar Veterinario \t\t\t\\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 2 - Registrar Usuario Asistente \t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 3 - Atenciones por Veterinarios\t\t\t\t\t\tt\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 4 - Ranking de Veterinarios por Atenciones\t\t\t\t**\t"); 
        printf("\n\t\t\t\t\t\t\t**\n 5 - Cerrar la Aplicacion  \t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\t\t\t\t\t\t\t\t***********************************************************\n");
	printf("\n\n\t\t\t\t\t\t\t**\n - Ingrese el número de la opcion: ");
	scanf("%d", &opc); 
	 
	return opc; 
}

}

float CalcularTurnosMes(File*arch, int mesTarget) //para hacer el Ranking
{
    float total = 0.0

    Registro regi;

    rewind(archi); //Paso 1 Rebobinar el archivo

    fread(&regi, sizeof(regi), 1, archi); // Paso 2 Intentar extraer el primer registro de archivo

 while (!feof(archi)) //Paso 3 mientras no sea FIN DE ARCHIVO
{
     if (regi.borrado == false) //Paso 4 - Procesar /  Gestionar el registro actual
      { 
        if (regi.fechaTurno.mm== mesTarget)
         {
           total = total + regi.importeFactura;
         }
      }

      fread (&regi, sizeof(regi), 1, archi); Paso 5 intentar extraer el SIGUIENTE registro de archivo
}



main()

{
	
	FILE *archivo;
        archivo = fopen("Veterinario.dat", "r+b");
		if (archivo == NULL)
	{
		}


{
	cadena pass;
	
do{
		printf("ingrese una password valido: ");
		_flushall();
		gets(pass);			
	}
while(!validarPass(pass));	
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
