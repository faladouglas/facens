#include <stdio.h>
#include <locale.h>

	int  main (){
		setlocale(LC_ALL,"portuguese");
		int idade ;
		
		printf("digite sua idade:");
		scanf("%i",&idade);
		
		if(idade >= 18){
			printf("voc� tem %i anos e � maior de idade",idade);
		}
		
	}
