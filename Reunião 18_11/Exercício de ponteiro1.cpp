#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 2. Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços e
exiba o maior endereço. */

int main(){
	
	setlocale(LC_ALL,"");
	
	int x = 6;
    int y = 10;

	printf("%p\n", &x);
	printf("%p\n", &y);

    if (&x > &y){
	    printf ("A variavel x tem o maior endereco de memoria\n");
		}
	else{
		printf ("A variavel y tem o maior endereco de memoria\n");
		}
	
	system("pause");
	return(0);
}
