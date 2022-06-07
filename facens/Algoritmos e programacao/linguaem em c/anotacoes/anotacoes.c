//anotações
#include <stdio.h>//entrada e saida
#include <locale.h>//"biblioteca de idiomas"
#include <stdlib.h>//para usar system, usar éssa biblioteca
#include <conio.h>


int nas,anoatual,res,resf;
char nome[50],end[50],cidade[50];

main(void){
	
	do{
	setlocale(LC_ALL,"Portuguese");
	
	printf("\nOlá, Bem vindo ao meu primeiro programa\n\n");
	system("pause");
	system("cls");
	printf("\nvamos precisar de alguns dados seus, OK ?\n\n");
	system("pause");
	system("cls");
	printf("\n\nDigite seu nome: ");
	scanf("%s",&nome);
	printf("\ndigite seu endereço:");
	scanf("%s",&end);
	printf("\ncidade:");
	scanf("%s",&cidade);
	printf("\ndigite o ano de nascimento:");
	scanf("%d",&nas);
	printf("\ndigite o ano atual:");
	scanf("%d",&anoatual);
	system("cls");
	
	
	printf("\n seu nome é %s \n endereço:%s \n cidade:%s \n você tem %d anos",nome,end,cidade,anoatual-nas);
	
	
	
	printf("\n\ndigite a opção desejeada:");
	printf("\n1-começar novamente");
	printf("\n2-fim");
	printf("\n\n\nopção desejada:");
	scanf("%d",&resf);
	system("cls");
	
	
}while(resf !=2);
	
	
	
	
	
}
