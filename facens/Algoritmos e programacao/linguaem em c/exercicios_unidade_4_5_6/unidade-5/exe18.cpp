#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	int numero=1 ;
	
	do{
		printf("tecle 0 para sair ou outro valor para continuar:  ");
		scanf("%i", &numero);
		
		
		system("cls");	
		
	
		
	}while(numero != 0);
	
	
	
}

