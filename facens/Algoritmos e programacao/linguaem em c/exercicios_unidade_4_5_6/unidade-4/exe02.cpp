#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	
	char letra;
	
	printf("escreva uma letra qualquer do alfabeto:");
	scanf("%c",&letra);
	
	if(( letra =='a') || (letra =='e' )||
		(letra =='i') || (letra =='o')||
		(letra =='u') || (letra =='A')||
		(letra =='E') || (letra =='I')||
		(letra =='O') || (letra =='U')){
			printf("você digitou a letra (%c) e éla é uma vogal",letra);
		}
	
	
	

}
