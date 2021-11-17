#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Descobrindo se o número é par ou ímpar

int main(){
setlocale (LC_ALL,"");

int numero;

printf("Digite um número\n");
scanf("%i", &numero);

if (numero % 2 == 0){
	printf("Este número é par.\n\n");
}
else if (numero % 2 != 0){
	printf("Este número pe ímpar.\n\n");
}
// else if !(numero % 2 == 0){
//	printf("Este número pe ímpar.\n\n");
}
system("pause");
return(0);
}
