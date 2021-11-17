#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 01. Crie um programa para identificar se um número é par ou ímpar. */

int main(){
    
    setlocale(LC_ALL,"");

    int n1;

printf("Digite um número");
scanf("%i", &n1);

n1 % 2 == 0 ? printf("O número digitado é par\n\n") : printf("O número digitado é ímpar\n\n");

    return 0;
}