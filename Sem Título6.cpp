#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"");

float n[3][3];
int l, c;

scanf("%f", &n[0][0]);

scanf("%f", &n[0][1]);

scanf("%f", &n[0][2]);

scanf("%f", &n[1][0]);

scanf("%f", &n[1][1]);

scanf("%f", &n[1][2]);

scanf("%f", &n[2][0]);

scanf("%f", &n[2][1]);

scanf("%f", &n[2][2]);

printf("\n%f\n", n[0][0]);

printf("%f\n", n[0][1]);

printf("%f\n\n", n[0][2]);

printf("%f\n", n[1][0]);

printf("%f\n", n[1][1]);

printf("%f\n\n", n[1][2]);

printf("%f\n", n[2][0]);

printf("%f\n", n[2][1]);

printf("%f\n\n", n[2][2]);

printf("### USANDO UMA ESTRUTURA DE REPETIÇÃO ###\n\n");

for (l=0; l<3; l++)
for (c=0; c<3; c++){

scanf("%f", &n[l][c]);

printf("Linhas [%i]  Coluna [%i] = %f\n",l, c, n[l][c]);
}

	system ("pause");
    return (0);
}
