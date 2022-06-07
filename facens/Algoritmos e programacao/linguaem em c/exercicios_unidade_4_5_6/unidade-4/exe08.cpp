#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float saldo = 1000.00, cheque , deposito,calculo;
	
	printf("seu saldo é de %5.2f \n\n\n",saldo);
	
	printf("digite o valor a ser depositado:");
	scanf("%f",&deposito);
	
	printf("\n\n\ndigite o valor do cheque a ser descontado:");
	scanf("%f",&cheque);
	
	calculo =  (saldo + deposito)-cheque;
	
	if(calculo >0){
		printf("seu saldo é positivo no valor de %5.2f reias",calculo);
	}
	else if( calculo == 0){
		printf("seu saldo é nulo no valor de %5.2f reias",calculo);
		
	}
	else{
		printf("seu saldo é negativo no valor de %5.2f reias",calculo);
	}
}
