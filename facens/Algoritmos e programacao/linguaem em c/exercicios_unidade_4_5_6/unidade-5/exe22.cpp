#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int x=0, flag=0;
	int y ; 
	
	printf("digite um numero qualquer de 0 a 100 : ");
	scanf("%i",&y);
	
	while(x <50){
		x++;
		if(y==x){
			flag = 1;
		}
	}
	if ( flag==1){
		printf("flag encontrado na listagem");
	}else{
		printf("flag não encontrado");
	}
	
		
}
