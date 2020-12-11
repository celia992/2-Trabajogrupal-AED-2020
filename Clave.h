#include <stdio.h>    //puts, scanf, printf, y otras funciones
#include <stdlib.h> // sytem (..) y otras funciones 
#include <string.h> // strcpy, strlwr, stren, strcat, strcat y otras funciones 

//para contraseña

typedef char cadena[32];

bool validarPass(cadena pass);
bool validarConsecutivasPass(cadena pass);

//main(){
	cadena pass;
	
	do{
		printf("ingrese una password valido: ");
		_flushall();
		gets(pass);			
	}while(!validarPass(pass));
	
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
		else if (pass[i] >='a' && pass[i] <='z'){
				 min++;
				 numcons = 0;
			 }
			 else if (pass[i] >= '0' && pass[i] <='9'){
			 	num++;
				numcons++;	
			    }
			 	else otros++;
		if (numcons == 4) break;
	}
