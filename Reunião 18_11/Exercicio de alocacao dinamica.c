#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1) Escreva um programa em linguagem C que
solicita ao usuário a quantidade de alunos de
uma turma e aloca um vetor de notas
(números reais). Depois de ler as notas,
imprime a média aritmética.
Obs: não deve ocorrer desperdício de
memória; e após ser utilizada a memória
deve ser devolvida. */

int main(){
	
	setlocale (LC_ALL,"");
	
   int alunos, i;
   float *notas, soma;

   printf("Informe a quantidade de alunos: ");
   scanf("%d", &alunos);
   
   notas = (float *) malloc(sizeof(float) * alunos+1);
   
   for(i=0; i<alunos; i++){

       printf("Informe a nota do aluno [%d]: ", i+1);
       scanf(" %f", &notas[i]);
	}

   soma = 0;

   for(i=0; i<alunos; i++){
       soma = soma + notas[i];
   }

   free(notas);

   printf("A média desses alunos é %.2f!\n", soma / alunos);

   system("pause");
   return (0);
}