#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	int controle=1 ;
	
	do{
		printf("incremento de 5 em 5 = (%i)\n", controle);
		controle += 5;
	}while(controle <20);
}
