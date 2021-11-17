#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* #include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escrever um programa para exibir os números de 1 até 50 na tela. */

int main(){

setlocale(LC_ALL,"");

int cont;

printf("\n");

printf("Usando o comando For\n\n");

for (cont = 1 ; cont <= 50 ; cont ++){
    printf("%i ", cont);
}

printf("\n\n");

printf("Usando o comando While\n\n");

cont = 1;

while (cont <= 50){
	
	printf("%i ", cont);
	
	cont ++;
}

printf("\n\n");

    system("pause");
    return (0);
}
