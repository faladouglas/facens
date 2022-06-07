#include <stdio.h>
#include <locale.h>


int main(){
	int idade=1 ;
	int cont=1;
	
	setlocale(LC_ALL,"portuguese");
	
	
/*	
	while(idade<18){
		printf("\nsua idade é %i anos\n",idade++);
	}
	*/

	
	while(cont<18){
		
		printf("\nsua idade é %i anos\n", cont);
		cont = cont + idade;
		
	}
}
