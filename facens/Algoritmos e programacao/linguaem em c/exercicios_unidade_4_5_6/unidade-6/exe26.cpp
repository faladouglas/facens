#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i = 1;
	
	for(i=1;i<=24;i++){
		printf("agora são %i horas\n",i);
	}
	
}
