#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao. */ 

int main(){
	
	setlocale(LC_ALL,"");
	
	int i = 3;
    int *ponteiroint = &i;
    
    float f = 10.78;
    float *ponteirofloat = &f;
    
    char c ='c';
    char  *ponteirochar = &c;
    
   *ponteiroint = 23;
   *ponteirofloat = 0.67;
   *ponteirochar = 'g';

    printf("Inteiro %i\n", *ponteiroint);
    printf("Real %f\n",  *ponteirofloat);
    printf("Char %c\n", *ponteirochar);
	
	system("pause");
	return(0);
}
