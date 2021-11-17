#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Verificando se os dois primeiros números é igual ao último.

int main(){
setlocale (LC_ALL,"");

int n1, n2, n3, soma;

printf("Digite um número\n");
scanf("%i", &n1);

printf("Digite outro número\n");
scanf("%i", &n2);

printf("Digite o último número\n");
scanf("%i", &n3);

soma = n1 + n2;

if (n1 + n2 == n3){
	printf("A soma %i + %i RESULTA no terceiro que é %i.\n\n", n1, n2, n3);
}
else{
	printf("A soma %i + %i NÃO RESULTA no terceiro que é %i.\n\n", n1, n2, n3);
}


system("pause");
return(0);
}
