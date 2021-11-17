#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");

char nome[30];

scanf("%s", &nome);

printf("%s\n\n", nome);

	system("pause");
    return (0);
}
