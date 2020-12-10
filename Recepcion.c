#include <stdio.h>
#include <stdlib.h> 
# include <string.h>


typedef char cadena[80]; //cambio 32 por 80 que es el mayor tamaño de consola

bool validarPass(cadena pass); //para validar la contraseña, estamos trabajando en esto

bool validarConsecutivasPass(cadena pass);

FILE*turnos;
FILE*mascotas;

struct Fecha{
int dd,mm,aaaa;	
}fecha;

struct mascota{
	char ApellidoNombre[60],Domicilio[60],Localidad[60],Telefono[25];
	int DNIdueno;  //vuelvo a escribir DNIdueño porque en el programa apareceran también el DNI del veterinario, así diferenciamos.
	struct FechaNacimiento fech;. // Revisemos esto de DNI para ver cuál es la forma más adecuada 
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
void RegistrarMascotas(FILE*mascotas){
	mascotas=fopen("Mascotas.dat","a+b");	do{
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

main ()
{
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
            printf ("Iniciar Sesion");
            break;
          }
   case 2:
          {
            printf ("Registrar Mascota");
            break;
          }
    
   case 3:
          {
            printf ("Registrar Turno");
            break;
          }
   case 4:
          {
            printf ("Listado de atenciones por Veterinario y fecha")
            break;
          }
   case 0:
          {
            printf ("Cerrar la aplicacion");
            break;
          }
   default:
          {
            printf ("Opcion incorrecta")
            break;
          }
   }; // Switch

   printf("\n\n");
   system( opc != 0);

  } while (opc != 0);
}

	
