#include <stdio.h>
#include <locale.h>

	int  main (){
		setlocale(LC_ALL,"portuguese");
		int idade ;
		
		printf("digite sua idade:");
		scanf("%i",&idade);
		
		if(idade >= 18){
			printf("você tem %i anos e é maior de idade",idade);
		}
		
	}
