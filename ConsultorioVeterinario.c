#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

FILE*Turnos;
FILE*Mascotas;



struct Fecha{
	int dd,mm,aa;
}fecha;

struct turnos{
	int MatriculaVet,dni;
	struct Fecha fecha;
	chart DetAt[380]
