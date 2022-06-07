#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int number=1;
	
	while(number <10){
		printf("repetindo instrução %i \n",number++);
	}
}
