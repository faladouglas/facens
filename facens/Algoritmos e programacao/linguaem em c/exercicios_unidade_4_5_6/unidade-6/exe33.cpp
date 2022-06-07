#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	int i , contagem=0;
	
	for(i=0;i<=100;i++){
		
		if(i%2!=0){
			printf("%i\n",i);
			contagem++;
		}
		
	}

	printf("total de numeros impares encontrado foi de :%i",contagem);


}

