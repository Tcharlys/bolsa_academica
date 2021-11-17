#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale (LC_ALL,"""");

//divisão inteira

int n1, n2, resto;
float re;

printf("Digite um número:\n");
scanf("%d", &n1);

printf("Digite outro número:\n");
scanf("%d", &n2);

re = n1 / n2;
resto =  n1 % 2 ;

printf("O resultao da divisão %d / %d = %f\n", n1,n2,re);
printf("O resto da divisão é = %d\n\n", resto);

    system("pause");
    return(0);
}

