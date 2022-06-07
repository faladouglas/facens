#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float peso;
	
	printf("qual o peso de sua mochila? ");
	scanf("%f",&peso);
	
	if(peso < 5.0){
		printf("%.3f kg peso leve", peso);
	}
	else if(peso >=5.0 && peso <= 10.0){
		printf("%.3f kg pesado", peso);
		
	}
	else{
		printf("%.3f kg muito pesado ", peso);
	}
}
