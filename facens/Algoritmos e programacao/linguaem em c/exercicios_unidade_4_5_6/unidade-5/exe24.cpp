#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	int numero =0, total=0;
	
	while(numero <50){
		if(numero%2==0)
			total = total+numero;		
		
		numero++;
	}
	printf("soma dos pares de 0 a 50 é: %i ",total);
}
