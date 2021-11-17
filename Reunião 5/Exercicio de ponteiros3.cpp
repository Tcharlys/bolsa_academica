#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int x, y;

    printf("Digite um numero: ");
	scanf("%i", &x);
    
	printf("Digite mais um numero: ");
    scanf("%i", &y);

    if(&x > &y){
    printf(" x tem o maior endereco de memoria\n");
    }
	else{
    printf("y tem o maior endereco de memoria\n");
	}
	
	system("pause");
	return(0);
}
