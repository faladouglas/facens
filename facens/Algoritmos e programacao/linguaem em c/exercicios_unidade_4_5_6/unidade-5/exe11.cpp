#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	/*int hora=1;					<------------------- modo 1 ----------------->
	
	
	while(hora <=12){
		
		
		printf("\n\nBom dia , agora são %i horas\n",hora) ;
		hora++;
		
	}*/
	
	int hora= 1;					//<------------------- modo 2 ----------------->
	int cont= 0;
	
	while(cont <=12){					
		
		printf("\n\nBom dia , agora são %i horas\n",cont) ;
		cont= cont+hora;
		
			
		
	}
}
