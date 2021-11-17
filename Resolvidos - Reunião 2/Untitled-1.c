#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
setlocale (LC_ALL,"");

int n1, n2, re, resto;

printf("Verifique se o número é ímpa ou par\n");
printf("Digite um número:\n");
scanf("%i", &n1);

printf("Digite outro número:\n");
scanf("%i", &n2);

re = n1 / n2;
resto = n1 % 2;

printf("%i / %i = %i\n", n1,n2,re);
printf("O resto = %i\n\n", resto);

system("pause");
return(0);
}
