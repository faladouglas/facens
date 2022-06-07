#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
float grdia,res,soma,grproduto;
int camada,repetir,mo=3;

main(void){
	setlocale(LC_ALL,"Portuguese");
	

	do{
			printf("\nquantas camadas de ouro sera dada ?");
		scanf(" %d", &camada);
		
		printf("\nquantas gramas de produto você tem ?");
		scanf(" %f", &grproduto);
		
		printf("\nvalor da grama do ouro:");
		scanf(" %2f", &grdia);	
		
		
		if(camada <=0 || grproduto<=0 || grdia<=0){
			
			printf("[erro] insira as quantidades corretas");
		}else{
		
		
			soma = ((camada+3)*grdia)/100;
			res= soma*grproduto;
			printf("\nvalor por grama sera +- %.2f\n\n",soma);
			printf("valor total do banho :%.2f",res);
		}
		
		
		printf("\n1-Novo calculo");
			printf("\n2-Sair");
			printf("\ndigite a opcão desejada:");
			fflush(stdin);
			scanf(" %d", &repetir);
			system("cls");

	}while(repetir!=2);



return 0;
}
	
	
	



	
	

	
	
	


