#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>//necessario para usar a fun��o rand e srand
#include <ctime>// necessario para usar a fun��o time
int main(){
	setlocale(LC_ALL,"portuguese");
	system("color 5f");
	
	printf("OL�, vamos jogar ?\ntente adivinha um numero em 5 tentativas...\nirei dar dicas se o numero escolhido por voce esta acima ou abaixo do numero segredo!!\n \nVamos la ? \n\n\n");
	system("pause");
	system("cls");
	
	int reset,numerochute,contador=0;
	srand (time(NULL));
	int numeroprograma = rand() % 100;
	
	do{
	
	for(contador=0;contador<5;contador++){
		printf("chute um numero de 0 a 100 :");
		scanf("%i",&numerochute);
			
	
		if(numerochute == numeroprograma){
			
			printf("\nparabens voc� acertou !!! %i\n", numeroprograma);
			exit( 3 );
    return 3;
    //encontrar uma maneira de dar op��o de sair ou reiniciar o jogo caso acerte a resposta !!! 
	}
	
	
		
		else if (numerochute < numeroprograma){
			printf("passou baixo\n");
	}
		else if (numerochute > numeroprograma){
			printf("passou alto\n");
	}
	
	
}
	printf("1 = sair\n");
	printf("2 = recome�ar");
	printf("\no que deseja ?: ");
	scanf("%i",&reset);
	system("cls");
}while(reset !=1);

	

	
	
	
}
