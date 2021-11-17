#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* decrescente  */

int main(){

setlocale(LC_ALL,"");

int cont, n;

scanf("%i", &n);

printf("\n");

for (cont = n ; cont >= 1; cont --){
    printf("%i \n", cont);
}

    system("pause");
    return (0);
}
