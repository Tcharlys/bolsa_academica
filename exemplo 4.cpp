#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore uma fun��o que receba tr�s notas de um aluno como par�metro e uma letra.
Se a letra for �A�, a fun��o deve calcular a m�dia aritm�tica das notas do aluno; se a letra for �P�, dever� calcular a m�dia ponderada, com pesos 5, 3 e 2.
Retorne a m�dia calculada para o programa principal. */

float media(float n1, float n2, float n3, char op){
    if (op == 'A') {
		return (n1 + n2 + n3) / 3;
    } else if (op == 'P') {
        return (n1*5 + n2*3 + n3*2) / 10;
    }
}

int main(){
	
	setlocale(LC_ALL,"");
	
    float nota1, nota2, nota3, calculo;
    char opcao;

    printf("Digite a op��o [A ou P]: \n A) M�dia Aritm�tica\n P) M�dia Ponderada\n");
    scanf("%c", &opcao);
    printf("Digite as notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    calculo = media(nota1, nota2, nota3, opcao);

    printf("Media= %f", calculo);

    return (0);
}
