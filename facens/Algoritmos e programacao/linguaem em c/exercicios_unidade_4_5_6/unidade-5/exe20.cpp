#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	int contador = 40;
	int controlador = 0;
	while(contador < 100){
		contador++;
		controlador++;
	}
	
	printf("o total de ciclos dentro do laço while foram de %i",controlador);
}
