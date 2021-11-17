#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"");

int cont;


printf("Usando o comando For\n\n");

for (cont = 0; cont <= 60; cont++){
	
    printf("%i Segundos\n", cont);
}

printf("\n");

printf("Usando o comando While\n\n");

cont = 1;
while (cont <= 60){
	//cont = cont + 2;
    printf("%i Segundos\n", cont);
    
    cont ++;
}

    system("pause");
    return (0);
}
