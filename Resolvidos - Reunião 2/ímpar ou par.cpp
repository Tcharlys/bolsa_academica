#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Descobrindo se o n�mero � par ou �mpar

int main(){
setlocale (LC_ALL,"");

int numero;

printf("Digite um n�mero\n");
scanf("%i", &numero);

if (numero % 2 == 0){
	printf("Este n�mero � par.\n\n");
}
else if (numero % 2 != 0){
	printf("Este n�mero pe �mpar.\n\n");
}
// else if !(numero % 2 == 0){
//	printf("Este n�mero pe �mpar.\n\n");
}
system("pause");
return(0);
}
