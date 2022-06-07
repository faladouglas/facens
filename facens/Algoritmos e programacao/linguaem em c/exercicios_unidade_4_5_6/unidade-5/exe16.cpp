#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	int numero=6 ;
	
	do{
		printf("decrementando de 1 em 1 (%i) \n",numero); //ira executar uma unica vez com o valor inicial 6 , caso teriamos usado un numero < 6 ele tbm iria executar ao menos 1 vez ja que a verificação é feita apenas no final .
		numero = numero-1;
	}while(numero >5)
;	
	
	
	
	
	
	
	
	}
