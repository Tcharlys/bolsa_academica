#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um programa em C que gere uma matriz B a partir de manipulações em uma matriz A de dimensão 6×6.
Escreva uma função que receba por parâmetro a matriz A e retorne a matriz B, 
onde cada linha j de B é a linha j de A multiplicada pelo elemento da diagonal principal da linha j. */

void ImprimeMatriz(int tam, int m[tam][tam]){
    
	int i, j;
    
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }
}

void calculo(int tam, int ma[tam][tam], int mb[tam][tam]) {
    
	int i, j;
    
	for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            mb[i][j] = ma[i][j] * ma[i][i];
        }
    }
}

int main(){

	setlocale(LC_ALL,"");

    int A[3][3] = {2, 6, 4, 8, 5, 9, 0, 7, 56}, B[3][3];

    ImprimeMatriz(3, A);
    Calculo(3, A, B);
    
    printf("\n");
    ImprimeMatriz(3, B);

    return 0;
}
