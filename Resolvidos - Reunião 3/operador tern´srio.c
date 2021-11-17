#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercícios:
Construa um programa capaz de informar se um número inteiro é par ou impar: */

int main(){
    setlocale(LC_ALL,"");

    int n1;

printf("Digite um número");
scanf("%i", &n1);

n1 >= 0 ? n1 ++ : n1 --;

printf("O número é %i", n1);
    return 0;
}