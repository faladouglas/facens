#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i = 1;
	int nota=0,soma = 0 ;
	
	for(i=1;i<8;i++){
		printf("digite uma nota de 0 a 10 de difilcudade para tarefa do dia %i: ",i);
		scanf("%i",&nota);
		
		soma = soma+nota;
		
		
	}
	if(soma <=30){
		printf("\no total da soma de dificuldade da semana foi %i , semana facil",soma);
	}else{
		printf("\no total da soma de dificuldade da semana foi %i , semana dificil",soma);
	}
	
	
	
}
