#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



main(void){
	
	float alt,peso,imc;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Ol�, vamos descobrir o seu IMC ?\n\n");
	system("pause");
	system("cls");
	printf("\n\nDigite seu peso ex:65,5......:");
	scanf("%f",&peso);
	printf("\ndigite sua altura ex:1,90......:");
	scanf("%f",&alt);
	printf("\n\n\n");
	system("pause");
	
	imc=peso/(alt*alt);
	
	printf("seu peso � de %0.1f\nsua altura � de %0.2f\n seu imc � de %0.2f  \n",peso,alt,imc);
	
	
	
}
