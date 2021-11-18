#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1) Fa�a um programa que leia um valor n e crie dinamicamente um vetor de n elementos
e passe esse vetor para uma fun��o que vai ler os elementos desse vetor. Depois, no
programa principal, o vetor preenchido deve ser impresso. Al�m disso, antes de
finalizar o programa, deve-se liberar a �rea de mem�ria alocada. */

void LerElementos(int *vetor, int i){
int j;

for(j=0; j<i; j++){

printf("Elemento %d: ", j);
scanf("%d", &vetor[j]);

}
}

int main(){
int *elementos, n, i;

printf("Digite um valor 'n': ");
scanf("%d", &n);

elementos = (int*) malloc(sizeof(int)*n);

if(elementos==NULL){

printf("Falha na alocacao de memoria.");
}

LerElementos(elementos, n);

for(i=0; i<n; i++){

printf("%d ", elementos[i]);

}

free(elementos);

system("pause");
return(0);
}