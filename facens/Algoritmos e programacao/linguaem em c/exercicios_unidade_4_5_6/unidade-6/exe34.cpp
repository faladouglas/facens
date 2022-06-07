#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	int dia=1 ,hora=1;
	
	for(dia=1;dia<=7;dia++){
		
		printf("dia da semana %i\n",dia);
		
		for(hora=1;hora<=24;hora++){
			
			printf("%i horas\n",hora);
		}
	}


}
