#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
setlocale (LC_ALL,"");

int n1, n2, re, resto;

printf("Verifique se o n�mero � �mpa ou par\n");
printf("Digite um n�mero:\n");
scanf("%i", &n1);

printf("Digite outro n�mero:\n");
scanf("%i", &n2);

re = n1 / n2;
resto = n1 % 2;

printf("%i / %i = %i\n", n1,n2,re);
printf("O resto = %i\n\n", resto);

system("pause");
return(0);
}
