#include <stdio.h>  // puts, gets, scanf, printf y otras funciones
#include <stdlib.h>  // system(..) y otras funciones.
# include <string.h>
# include "Clave.h" //Libreria para Contraseña


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



/*struct Historial
{    
    char  Evolucion;
    Fecha FechTurno;
};                        */


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

struct Turno
	
{
	Veterinario Matricula;
	Fecha Fech;
	Mascota DNIdueno;
	cadena DetAtencion;
	bool borradoT;
	
};

/*void RegistrarTurnos(FILE*turnos){
	turnos=fopen("Turnos.dat","a+b");
	
*/	
	
	
	
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
	
	//printf("\t\t\t\t\t\t\n**********************************************************\n");
	
	printf("\n\t\t\t\t\t\t\t**\n 1 - Iniciar Sesion\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 2 - Registrar Mascota\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\n\t\t\t\t\t\t\t**\n 3 - Registrar Turno \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
       // printf("\n\t\t\t\t\t\t\t**\n 00-  Pago de Contado y a Credito");
	printf("\n\t\t\t\t\t\t\t**\n 4 - Listado de Atenciones por Veterinario y Fecha\t\t**\t");
        printf("\n5- Listado de Mascotas Registradas");
	printf("\n\t\t\t\t\t\t\t**\n 0 - Cerrar la aplicacion \t\t\t\t\t\t\t\t\t\t\t\t\t\t**\t");
	printf("\t\t\t\t\t\t\t\t************************************************************\n");
	
	scanf("%d", &opcion);
	
	return opcion;
}



/*void RegistrarMascotas(FILE *mascotas){
	mascotas=fopen("Mascotas.dat","a+b");	
	do{
		system("cls");
		printf("\n Mascota %d",i+1);
		_flushall();
		printf("\n Digite el apellido y nombre: ");gets(mascot.ApellidoNombre);
		_flushall();
		printf("\n Digite el domicilio: ");gets(mascot.Domicilio);
		_flushall();
		printf("\n Digite la localidad: ");gets(mascot.Localidad);
		_flushall();
		printf("\n Digite el telefono: ");gets(mascot.Telefono);
		printf("\n Digite el dni: ");scanf("%d",&mascot.Dni);
		printf("\n Digite la fecha de nacimiento \n");
		printf(" -Dia: ");scanf("%d",&mascot.fech.dd);
		printf(" -Mes: ");scanf("%d",&mascot.fech.mm);
		printf(" -A%co: ",164);scanf("%d",&mascot.fech.aa);
		printf("\n Digite el peso: ");scanf("%f",&mascot.Peso);	
		fwrite(&mascot,sizeof(Mascota),1,mascotas);
		flushall();
		printf("\n Desea registrar mas mascotas(s/n)(S/N): ");scanf("%c",&op);
		if(op=='s'||op=='S'){
			band=0;
			i++;
		}else if(op=='n'||op=='N'){
			band=1;
		}
	}while(band==0);
		fclose(mascotas);
}
void RegistrarTurnos(FILE*turnos){
	turnos=fopen("Turnos.dat","a+b");	
		do{
		system("cls");
		printf("\n Turno %d",i+1);
		printf("\n Digite la matricula del veterinario: ");scanf("%d",&tur.MatriculaVet);
		printf("\n Digite la fecha actual \n");
		printf(" -Dia: ");scanf("%d",&tur.fecha.dd);
		printf(" -Mes: ");scanf("%d",&tur.fecha.mm);
		printf(" -A%co: ",164);scanf("%d",&tur.fecha.aa);
		printf("\n Digite el dni del due%co: ",164);scanf("%d",&tur.dni);
		fwrite(&tur,sizeof(Turnos),1,turnos);
		_flushall();
		printf("\n Decea registrar mas turnos(s/n)(S/N): ");scanf("%c",&op);
		if(op=='s'||op=='S'){
			band=0;
			i++;
		}else if(op=='n'||op=='N'){
			band=1;
		}
	}while(band==0);
	fclose(turnos);
}
void VerListaMascotas(FILE*mascotas){
	rewind(mascotas);
	mascotas=fopen("Mascotas.dat","r+b");
	fread(&mascot,sizeof(Mascota),1,mascotas);
	while(!feof(mascotas)){
		printf("\n\n Mascota %d",j+1);
		printf("\n Apellido y Nombre: %s",mascot.ApellidoNombre);
		printf("\n Domicilio: %s",mascot.Domicilio);
		printf("\n Localidad: %s",mascot.Localidad);
                printf("\n Telefono: %s",mascot.Telefono);
		printf("\n DNI: %d",mascot.Dni);
		printf("\n Fecha de nacimiento %d/%d/%d",mascot.fech.dd,mascot.fech.mm,mascot.fech.aa);
		printf("\n Peso: %.2f",mascot.Peso);	
		j++;
		fread(&mascot,sizeof(Mascota),1,mascotas);	
	}
	fclose(mascotas);
	getch();
}
void RegistrarTurno(FILE *archi)   // Camila, aquí ya te había realizado la introducción para registrar turno.
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
}



*/


void AgregarMascota(FILE *archi)  //ALTA DE LA MASCOTA
{
	Mascota regiMascot; //regi es la variable  de tipo struc
	
	printf("Apellido y Nombre de Mascota: \n");
    _flushall();
	gets( regiMascot.ApellyNomMascot);
	
	printf("DNI del Dueño de la mascota:  ");
	scanf ("%d", &regiMascot.DNIDueno);
	printf("Domicilio de la Mascota:  \n");
	
	_flushall();
	gets ( regiMascot.Localidad);
	
	printf("Fecha de Nacimiento de la mascota: \n");
	
	printf("dd:  ");
	scanf("%d", &regiMascot.Nacimiento.dd);

        printf("mm:  ");
	scanf("%d", &regiMascot.Nacimiento.mm);
	
	printf("aaaa:  ");
	scanf("%d", &regiMascot.Nacimiento.aaaa);
	
	printf("Peso de la mascota ");
	scanf("%f" , &regiMascot.PesoMascot);
	
	/*printf("Edad de la mascota ");  trabajar este algoritmo mas adelante para que me saque la edad
	scanf("%f" , &regiMascot.);*/
	
	printf("Telefono \n");
	_flushall();
	gets(regiMascot.TelefonoMascota);
	
	regiMascot.borradoM= false;
	
	fseek (archi, 0, SEEK_END);
	fwrite (&regiMascot, sizeof(regiMascot), 1, archi);
	//confirmacion
}


void ListarMascota(FILE *archiM) //LISTAR MASCOTA
{
	Mascota regiMascot;
	
	//Paso 1 - Rebobinar el archivo
	rewind(archiM);
	//fseek(archi, 0, SEEK_SET);

	
	//Paso 2 - Intentar extraer el primer registro del archivo
	fread(&regiMascot, sizeof(regiMascot), 1, archiM);
	
	//Paso 3 - Mientras no sea FIN DE ARCHIVO
	while ( !feof(archiM) )
	
	
		//Paso 4 - Procesar / Gestionar el registro actual
	{
		
		if (regiMascot.borradoM == false)
		//if (!regi.borrado)
		{
			
			printf("\n  DATOS DE LA MASCOTA   \n");
			printf("\nApellido y Nombre %s", regiMascot.ApellyNomMascot);
			printf("\nFecha de Nacimiento : %d/%d/%d\n\n", regiMascot.Nacimiento.dd, regiMascot.Nacimiento.mm, regiMascot.Nacimiento.aaaa);
			printf("\nNro de DNI del Dueno: %d", regiMascot.DNIDueno);
			printf("\nLocalidad : %s", regiMascot.Localidad);
			printf("\nTelefono del Dueno de la Mascota: %s", regiMascot.TelefonoMascota);
			printf("\nPeso: %f", regiMascot.ApellyNomMascot);
			
		}
		
		
		// Paso 5 - Intentar extraer EL SIGUIENTE registro del archivo
		fread(&regiMascot, sizeof(regiMascot), 1, archiM);
		
	} 
	
}


	
void AgregarTurno(FILE *archiT)  //ALTA DE  TURNO
{

	Turno regiTurno; //regi es la variable  de tipo struc
	
	printf("MATRICULA del Veterinario ");
	scanf("%d", &regiTurno.Matricula);
	
	printf("Fecha de atencion: ");
	_flushall();
	
	printf("dd:  ");
	scanf("%d", &regiTurno.Fech.dd);

        printf("mm:  ");
	scanf("%d", &regiTurno.Fech.mm);	
	
	printf("aaaa:  ");
	scanf("%d", &regiTurno.Fech.aaaa);
	
	//printf("Apellido y Nombre del Veterinario: ");  trabajar luego para ver si se ve el veterinario
	//gets (regiTurno.);                               ademas de su matricula
	
	printf("DNI del dueno de la Mascota: ");
	scanf("%d", &regiTurno.DNIdueno);
	
	regiTurno.borradoT= false;
	
	fseek (archiT, 0, SEEK_END);
	fwrite (&regiTurno, sizeof(regiTurno), 1, archiT);
	//confirmacion
}





main ()
{
    	FILE *archMascota;
	FILE *archTurno;
	
	archMascota = fopen("Mascota.dat", "r+b");
	
	if (archMascota == NULL)
	{
		printf("El archivo no existe, se intentara crearlo...");
		
		archMascota = fopen("Mascota.dat", "w+b");
		
		if (archMascota == NULL)
		{
			printf("Error. No se pudo crear el archivo...");
			exit(1);
		}
		
		printf("\nArchivo creado exitosamente...\n\n");
		system("pause");
	}
	
	
	
  int opc = 0;
  do
  {
    system ("cls");
    opc = menu ();
    system ("cls");
    
    swich (opc)
    { 
    case 1:
          {
            printf "EN PROCESO...");
	   
		  
            break;
          }
   case 2:
          {
            printf ("Registrar Mascota");
	     AgregarMascota (archMascota); 
		  
            break;
          }
    
   case 3:
          {
            printf ("Registrar Turno");
	    AgregarTurno (archTurno);	  
		  
            break;
          }
   case 4:
          {
            printf ("Listado de atenciones por Veterinario y fecha")
            break;
          }
   case 5:
	 {
	    printf("Listado de atenciones de Mascotas Registradas\n");

	    ListarMascota (archMascota);
	    break;
	  } 
   case 0:
          {
            printf ("Cerrar la aplicacion");
            break;
          }
   default:
          {
            printf ("Opcion incorrecta...")
            break;
          }
   }; // Switch

   printf("\n\n");
   system( opc != 0);

  } while (opc != 0);
	
}

	
