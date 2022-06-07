#include <stdio.h>
#include <locale.h>

int main( ){
	
 setlocale(LC_ALL, "Portuguese");
 
  float altura;
  
 printf("Digite a altura de uma pessoa:\n");
 scanf("%f",&altura);  
 
 if(altura >= 1,9 && altura <= 2,3){
 
 	printf("A pessoa possui estatura alta.\n");
 }
 return 0;
}
