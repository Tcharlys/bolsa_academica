#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que imprima 11 vezes a frase " Hello World!" utilizando uma estrutura sequencial e uma estrutura de repetição while. */

int main(){

setlocale(LC_ALL,"");

int cont;

printf("\n");

printf("Usando o comando For\n\n");

for (cont = 1 ; cont <= 11 ; cont ++){
    printf("Hello World\n");
}

printf("Usando o comando While\n\n");

cont = 1;

while (cont <= 11){
	
	printf("Hello World\n");
	
	cont ++;
}
    system("pause");
    return (0);
}
