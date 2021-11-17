#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");
int n1, n2, resultado;

printf("Digite um Número: ");
scanf("%i", &n1);

printf("Digite outro Número: ");
scanf("%i", &n2);

resultado = n1 + n2;

printf("O resultado da soma é: %i\n",resultado);
	
	system("pause");
	return(0);
}