#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Verificando se os dois primeiros n�meros � igual ao �ltimo.

int main(){
setlocale (LC_ALL,"");

int n1, n2, n3, soma;

printf("Digite um n�mero\n");
scanf("%i", &n1);

printf("Digite outro n�mero\n");
scanf("%i", &n2);

printf("Digite o �ltimo n�mero\n");
scanf("%i", &n3);

soma = n1 + n2;

if (n1 + n2 == n3){
	printf("A soma %i + %i RESULTA no terceiro que � %i.\n\n", n1, n2, n3);
}
else{
	printf("A soma %i + %i N�O RESULTA no terceiro que � %i.\n\n", n1, n2, n3);
}


system("pause");
return(0);
}
