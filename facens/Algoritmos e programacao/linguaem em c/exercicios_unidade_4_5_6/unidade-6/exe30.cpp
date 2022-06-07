#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
int n1,n2,i=0,quantidade=0;

	printf("digite o primeiro numero:");
	scanf("%i",&n1);
	printf("digite o primeiro numero:");
	scanf("%i",&n2);
	
	for(i=0;i<=100;i++){
		
		if(n1 == i || n2==i){
		printf("numero encontrado: %i\n",i);
			quantidade++;
		}
		
		}
		printf("foram encontrados %i numeros de 0 a 100\n\n",quantidade);
		system("pause");
		
	}
	
