#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int numero,i=0;
	
	printf("digite um numero inteiro de 0 a 100 :");
	scanf("%i",&numero);
	
	for(i=0 ; i<=100;i++){
		
	if(numero == i){
			printf("%i",i);
		}
		
		}
		if(numero>100){
			printf("numero nao encontrado");
		}
		
	
		
	
	
	
}
