#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	int numero ;
	
	printf("digite um numero de 0-100:");
	scanf("%i",&numero);
	
	while(numero<100){
		printf("o numero atual é de %i \n", numero);
		numero = numero*2;
	}
	return 0 ;
}
