#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("digite um numero:");
	scanf("%i",&numero);
	
	if(numero%2 == 0){
		printf("o numero %i é par",numero);
		
	}
	else{
		printf("o numero %i é impar",numero);
	}
}
