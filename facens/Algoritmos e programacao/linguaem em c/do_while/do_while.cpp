#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int n,resposta;
int c=0;

int main(void){
	
	// Do while � uma repeti��o infinita , at� que seja acionado o comando para encerrar 
	do
{
		
	
	
	printf("digite o numnero da tabuada:");
	scanf("%d",&n);
	
	for(c=0;c<=10;c++){
		
		printf("%d x %d = %d\n", n,c,n*c);
		
		
		
		
		
	}
	printf("\n1- Novo calculo\n");
	printf("2- Sair\n");
	printf("digite a opc�o desejada:");
	scanf("%d",&resposta);
	//system ("cls") usado para limpar a tela ao final do ciclo
	system("cls");
}while(resposta !=2);

	
	return 0;
	
}
