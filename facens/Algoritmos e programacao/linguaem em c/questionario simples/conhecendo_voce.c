#include <stdio.h>
#include <string.h>
#include <locale.h>

int idade;
float salario;
char nome [50];

main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("ola, vamos conhecer um pouco mais voc� ?\n");
	
	
	printf("digite seu nome:");
	scanf("%s",&nome);
	
	
	printf("digite a sua idade:");
	scanf("%i",&idade);
	
	printf("informe seu salario: ");
	scanf("%f", &salario);
	
	printf("\n os dados informados s�o:\n\n seu nome � %s\n voce tem  %i anos \n o seu salario � de %2.f reais ",nome ,idade ,salario);
	
	
	
	
	
}







