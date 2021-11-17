#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Números pares  */

int main(){

setlocale(LC_ALL,"");

int cont, n;

printf("Digite até que número você queira saber os números pares\n");
scanf("%i", &n);

for (cont = n ; cont <= 1; cont --){
    printf("%i \n", cont);
}


    system("pause");
    return (0);
}