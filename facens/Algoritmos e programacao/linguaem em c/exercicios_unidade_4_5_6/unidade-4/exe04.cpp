#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("digite sua idade:");
	scanf("%i",&idade);
	
	if(idade >=18){
		printf("voc� tem %i ano e � maior de idade", idade);
	}
	else{
		printf("voce tem %i anos e � menor de idade",idade);
	}
}
