#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Obtendo a m�dia por meio do comando If e Else

int main(){
setlocale (LC_ALL,"");

float nota1, nota2, nota3, nota4, nota_final, frequencia;

printf("NA ESCALA 0 A 10.0\nDigite a nota do primeiro bimestre:\n");
scanf("%f", &nota1);

printf("Digite a nota do segundo bimestre:\n");
scanf("%f", &nota2);

printf("Digite a nota do terceiro bimestre:\n");
scanf("%f", &nota3);

printf("Digite a nota do quarto bimestre:\n");
scanf("%f", &nota4);

printf("Digite a frequencia do aluno:\nEM N�MEROS NA ESCALA DE 0 A 100!\n");
scanf("%f", &frequencia);

nota_final = nota1 + nota2 + nota3 + nota4 / 4;

   if(nota_final >= 6.0 && frequencia >= 75){
	printf("Voc� foi Aprovado, Parab�ns!!\n\n");
    }
     else{
	  printf("Infelizmente voc� n�o foi aprovado, tenha mais empenho no pr�ximo ano\n\n");
	  } 


system("pause");
return(0);
}
