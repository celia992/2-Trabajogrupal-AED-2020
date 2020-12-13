#include <stdio.h>    //puts, scanf, printf, y otras funciones
#include <stdlib.h> // sytem (..) y otras funciones 
#include <string.h> // strcpy, strlwr, stren, strcat, strcat y otras funciones 

//para contraseña

typedef char cadena[32];

bool validarContrasenia(cadena ContraseniaVet);
bool validarConsecutivasContrasenia(cadena ContraseniaVet);
bool validarContraseniaA(cadena ContraseniAsis);
bool validarConsecutivasContraseniaA(cadena ContraseniAsis);
bool validarUsuario(cadena );

//main(){
	/*cadena pass;
	
	do{
		printf("ingrese una password valido: ");
		_flushall();
		gets(pass);			
	}while(!validarPass(pass));
	
	printf("pass Valido!");
}*/

bool validarContrasnia(cadena ContraseniaVet)
{
	int may = 0, min = 0, num = 0, otros = 0, numcons = 0;
	
	for(int i=0; i<strlen(ContraseniaVet); i++){
		if (ContraseniaVet[i] >='A' && ContraseniaVet[i] <='Z'){
			may++;
			numcons = 0;		
		} 
		else if (ContraseniaVet[i] >='a' && ContraseniaVet[i] <='z'){
				 min++;
				 numcons = 0;
			 }
			 else if (ContraseniaVet[i] >= '0' && ContraseniaVet[i] <='9'){
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
	       strlen(ContraseniaVet)>=6 && 
		   strlen(ContraseniaVet)<=32 && 
		   numcons<=3 && 
		   validarConsecutivasContrasenia(ContraseniaVet);
}

bool validarConsecutivasContrasenia(cadena ContraseniaVet){
	int letrasCons = 1;
	
	strlwr(ContraseniaVet);
	//aBuel123
	for(int i=0; i<strlen(ContraseniaVet); i++){
		if (ContraseniaVet[i] >='a' && ContraseniaVet[i] <='z'){
			if(i>0 && ContraseniaVet[i-1]>'9' && ContraseniaVet[i]==ContraseniaVet[i-1]+1) letrasCons++;
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



