#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int  ra ,alunos, aluno=1;
	float n1 = 0.0 ,n2=0.0,media=0.0;
	
	printf("digite a quantidade de alunos : ");
	scanf("%i",&alunos);
	
	while(aluno <= alunos){
		printf("digite o ra do aluno - %i:",aluno);
		scanf("%i",&ra);
		printf("digite a primeira nota:");
		scanf("%f",&n1);
		printf("digite a segunda nota 2:");
		scanf("%f",&n2);
		aluno++;
		media= (n1+n2)/2;
		printf("\nsituação do aluno: \n");
		printf("ra:%i \nnota1:%.2f \nnota2:%.2f\nmedia:%.2f\n",ra,n1,n2,media);
		if(media <5.0){
			printf("\n >----reprovado!----<\n\n\n");
		}else{
			printf("\n >----aprovado!----<\n\n\n");
		}
		
		
	}
	
	
	
}
