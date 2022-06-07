#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

char letra='a';
int i=1,total=0;

for (letra='a';letra<='z';letra++){
	printf("%C=%i\n",letra,i);
	total=i;
	i++;
	
}
printf("o alfabeto tem %i letras",total);



}
