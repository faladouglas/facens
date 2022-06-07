#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	int dia;
	
	printf("digite um numero de 1-7 correspondente ao dia da semana:");
	
	scanf("%i",&dia);
	
	
	switch(dia){
		case 1 :
			printf("segunda");
			break;
		case 2 :
			printf("terça");
			break;
		case 3 :
			printf("quarta");
			break;
		case 4 :
			printf("quinta");
			break;
			case 5 :
			printf("sexta");
			break;
		case 6 :
			printf("sabado");
			break;
		case 7 :
			printf("domingo");
			break;
		default:
			printf("numero invalido, tente novamente =D");
			
	}
}
