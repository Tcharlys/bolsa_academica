#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale (LC_ALL,"""");

//divis�o inteira

int n1, n2, resto;
float re;

printf("Digite um n�mero:\n");
scanf("%d", &n1);

printf("Digite outro n�mero:\n");
scanf("%d", &n2);

re = n1 / n2;
resto =  n1 % 2 ;

printf("O resultao da divis�o %d / %d = %f\n", n1,n2,re);
printf("O resto da divis�o � = %d\n\n", resto);

    system("pause");
    return(0);
}

