#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char letra;
	
	printf("digite uma letra do alfabeto:");
	scanf("%c",&letra);
	

		
		if((letra =='a') || (letra =='e' )||
			(letra =='i') || (letra =='o')||
			(letra =='u') || (letra =='A')||
			(letra =='E') || (letra =='I')||
			(letra =='O') || (letra =='U')){
				
				printf("voc� digitou a letra (%c) e �la � uma vogal",letra);
		}
		
		else{
			printf("a letra (%c) � uma consoante",letra);
		}
}
