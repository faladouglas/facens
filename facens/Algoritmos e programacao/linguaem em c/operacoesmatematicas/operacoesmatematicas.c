#include <stdio.h>
#include <locale.h>

int n1=20,n2=20,soma,sub,multi;

float divisao;

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	soma=n1+n2;
	sub=n1-n2;
	multi= n1*n2;
	divisao= n1/n2;
	
	printf("o resultado da soma �: %i \n",soma);
	
	printf("o resultado da subtra��o �: %i\n",sub);
	
	printf("o resultado da Multiplica��o �: %i\n",multi);
	
	printf("o resultado da Divis�o �: %1.f\n",divisao);
	
	
}
