#include <locale.h>
#include <stdio.h>

int idade1,idade2;

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	printf("informe sua idade:");
	scanf("%i",&idade1);
	
	printf("informe a idade do seu irm�o:");
	scanf("%i",&idade2);
	
	if(idade1 <= idade2){
		printf("vc � mais novo que seu irm�o");
	}else{
		printf("voce � mais velho que seu irm�o");
	}
	
}
