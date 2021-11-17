#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void separador(float num, int *a, float *b){
    *a = (int)num;
    *b = num - *a;
}

int main(){
	
	setlocale(LC_ALL,"");
	
    float num, fracao;
    int inteiro;

	printf("Informe um número\n");
    scanf("%f", &num);

    separador(num, &inteiro, &fracao);

    printf("Número Lido: %f\nParte Inteira: %i\nParte fracionada: %f", num, inteiro, fracao);

    return (0);
}
