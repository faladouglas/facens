#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("digite sua idade:");
	scanf("%i",&idade);
	
	if(idade >=18){
		printf("você tem %i ano e é maior de idade", idade);
	}
	else{
		printf("voce tem %i anos e é menor de idade",idade);
	}
}
