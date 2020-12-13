#include <stdio.h>    //puts, scanf, printf, y otras funciones
#include <stdlib.h> // sytem (..) y otras funciones 
#include <string.h> // strcpy, strlwr, stren, strcat, strcat y otras funciones 

//para contraseña

typedef char cadena[32];

bool validarPass(cadena pass);
bool validarConsecutivasPass(cadena pass);
bool validarContraseniaA(cadena ContraseniAsis);
bool validarConsecutivasContraseniaA(cadena ContraseniAsis);
bool validarUsuario(cadena );

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
	
		return may>=1 && 
		   min>=1 && 
		   num>=1 && 
		   otros==0 && 
	       strlen(pass)>=6 && 
		   strlen(pass)<=32 && 
		   numcons<=3 && 
		   validarConsecutivasPass(pass);
}

bool validarConsecutivasPass(cadena pass){
	int letrasCons = 1;
	
	strlwr(pass);
	//aBuel123
	for(int i=0; i<strlen(pass); i++){
		if (pass[i] >='a' && pass[i] <='z'){
			if(i>0 && pass[i-1]>'9' && pass[i]==pass[i-1]+1) letrasCons++;
			//else letrasCons = 0;			
		}
		
		if (letrasCons == 2) break;
	}	
	return letrasCons < 2;
}


// valicación de Asistente

bool validarContrasniaA(cadena ContraseniAsis)
{
	int may = 0, min = 0, num = 0, otros = 0, numcons = 0;
	
	for(int i=0; i<strlen(ContraseniAsis); i++){
		if (ContraseniAsis[i] >='A' && ContraseniAsis[i] <='Z'){
			may++;
			numcons = 0;		
		} 
		else if (ContraseniAsis[i] >='a' && ContraseniAsis[i] <='z'){
				 min++;
				 numcons = 0;
			 }
			 else if (ContraseniAsis[i] >= '0' && ContraseniAsis[i] <='9'){
			 	num++;
				numcons++;	
			    }
			 	else otros++;
		if (numcons == 4) break;
	}
	
	return may>=1 && 
		   min>=1 && 
		   num>=1 && 
		   otros==0 && 
	       strlen(ContraseniAsis)>=6 && 
		   strlen(ContraseniAsis)<=32 && 
		   numcons<=3 && 
		   validarConsecutivasContraseniaA(ContraseniAsis);
}

bool validarConsecutivasContraseniaA(cadena ContraseniAsis){
	int letrasCons = 1;
	
	strlwr(ContraseniAsis);
	//aBuel123
	for(int i=0; i<strlen(ContraseniAsis); i++){
		if ( ContraseniAsis[i] >='a' && ContraseniAsis[i] <='z'){
			if(i>0 && ContraseniAsis[i-1]>'9' && ContraseniAsis[i]==ContraseniAsis[i-1]+1) letrasCons++;
			//else letrasCons = 0;			
		}
		
		if (letrasCons == 2) break;
	}	
	return letrasCons < 2;
}



