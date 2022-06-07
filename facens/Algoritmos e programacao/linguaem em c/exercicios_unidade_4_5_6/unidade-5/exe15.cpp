#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	int hora=1 ;
	
	do{
		printf("bom dia , agora são %i horas\n", hora);
		hora = hora+1;
	}while(hora <12);
	
}
