#include <locale.h>
#include <stdio.h>

int idade1,idade2;

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	printf("informe sua idade:");
	scanf("%i",&idade1);
	
	printf("informe a idade do seu irmão:");
	scanf("%i",&idade2);
	
	if(idade1 <= idade2){
		printf("vc é mais novo que seu irmão");
	}else{
		printf("voce é mais velho que seu irmão");
	}
	
}
