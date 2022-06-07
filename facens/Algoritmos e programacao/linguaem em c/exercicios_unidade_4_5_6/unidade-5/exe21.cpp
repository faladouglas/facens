#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int total = 1 ;
	int contador = 1;
	
	while(contador<10){
			total = total +contador;
			contador++;
		if(contador<10){
			printf("%i + %i = %i\n",total ,contador,(total+contador));
		}
		
	
	
		
		
		
	}
	printf("o valor total dos numeros somados é: %i",total);
}
