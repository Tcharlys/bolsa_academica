#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* #include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escrever um programa para exibir os números de 1 até 50 na tela. */

int main(){

setlocale(LC_ALL,"");

int cont, numero;

printf("\n");

printf("Usando o comando For\n\n");

for (cont = 1 ; cont <= 10000 ; cont ++){
    if((cont % 4 == 0) && (cont % 5 == 0) && (cont % 7 == 0)){
    
    numero = cont;
    
    printf("%i ", numero); 
	//break; 
	}
}

printf("\n\n");

printf("Usando o comando While\n\n");

cont = 1;

while (cont <= 10000){
	if((cont % 4 == 0) && (cont % 5 == 0) && (cont % 7 == 0)){
    
    numero = cont;
  
    printf("%i ", numero); 
	//break;
	}
	cont ++;
	
}

printf("\n\n");

    system("pause");
    return (0);
}
