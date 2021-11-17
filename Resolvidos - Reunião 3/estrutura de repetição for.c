#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  */

int main(){

setlocale(LC_ALL,"");

int cont;

for (cont = 0; cont <= 60; cont 2++){
    printf("%i Segundos\n", cont);
}


    system("pause");
    return (0);
}