#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	int numero=0 ;
	
	do{
		printf("%i\n",numero);
		numero=numero+1;
	}while(numero < 10);
}
