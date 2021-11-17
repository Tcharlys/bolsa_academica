#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Números pares  */

int main(){

setlocale(LC_ALL,"");

int cont, n;

printf("Digite até que número você queira saber os números pares\n");
scanf("%i", &n);

printf("Números pares entre %i e %i \n", cont, n);

printf("Usando o comando For\n\n");

for (cont = 0; cont <= n; cont = cont + 2){
	printf("%i ", cont);

}

printf ("\n\n");

printf("Usando o comando While\n\n");

cont = 0;

while (cont <= n){
	
    printf("%i ", cont);
    
    cont = cont +2 ;
}


    system("pause");
    return (0);
}
