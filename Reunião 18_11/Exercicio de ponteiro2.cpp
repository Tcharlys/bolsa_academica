#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
Associe as varveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros.
Imprima os valores das variáveis antes e após da modificação. */ 

int main(){
	
	setlocale(LC_ALL,"");
	
	int i = 3;
    int *ponteiroInt = &i;
    
    float f = 10.78;
    float *ponteiroFloat = &f;
    
    char c ='c';
    char  *ponteiroChar = &c;
    
	printf("Inteiro %i\n", *ponteiroInt);
    printf("Real %f\n",  *ponteiroFloat);
    printf("Char %c\n\n", *ponteiroChar);
	
   *ponteiroInt = 23;
   *ponteiroFloat = 0.67;
   *ponteiroChar = 'g';

    printf("Inteiro %i\n", *ponteiroInt);
    printf("Real %f\n",  *ponteiroFloat);
    printf("Char %c\n\n", *ponteiroChar);
	
	system("pause");
	return(0);
}