#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i = 0,soma=0;
		printf("numeros pares de 0 a 50:\n");
	for(i=0;i<=50;i++){
	
		if(i%2==0){
			printf("%i\n",i);	
			soma=soma+i;
	}
	
	
	}
	printf("\na soma total dos numeros pares é:%i",soma);
	
	}
