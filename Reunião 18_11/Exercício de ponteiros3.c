#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 3. Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do
teclado. Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o. */

int main (){
  
  setlocale(LC_ALL,"");
  
  int a, b;

    printf("Digite um numero: ");
        scanf(" %i", &a);
    printf("Digite mais um numero: ");
        scanf(" %i", &b);

    if(&a > &b){
        printf(" a tem o maior endereco de memoria\n\n");
    }
    else{
		printf(" b tem o maior endereco de memoria\n\n");	
	}
    system("pause");
    return(0);
}