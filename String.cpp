#include <stdio.h>
#include <stdlib.h>

int main(){

char nome[20];


//scanf("%s", nome);
fgets(nome, 20, stdin);

printf("\n\n");

printf("%s\n\n", nome);

	system ("pause");
    return (0);
}
