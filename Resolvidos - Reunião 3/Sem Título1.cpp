#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 02. Crie um programa para identificar se um n�mero � igual ou diferente de 4. */

int main(){

setlocale(LC_ALL,"");

int numero;

printf("Informe um n�mero\n");
scanf("%i", &numero);

numero == 4 ? printf("O n�mero digitado � igual a 4\n\n") : printf("O n�mero digitado � diferente de 4\n\n");


    system("pause");
    return (0);
}
