#include <locale.h>
#include <stdio.h>

int opcao;


main(void){
	setlocale(LC_ALL,"Portuguese");
	
	printf("informe a opção desejada:\n");
	printf("1- monstrar da data atual\n");
	printf("2- mostrar o ano que estamos:\n");
	printf("3- encerrar o programa \n");
	printf("opção:");
	scanf("%i",&opcao);
	
	switch(opcao){
		case 1:
		printf("03/03/2022");
		break;
		
		case 2:
		printf("2022");
		break;
		
		case 3:
		break;
	}
	
	
}
