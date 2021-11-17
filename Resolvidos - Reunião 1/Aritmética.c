#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	float x, y, redasoma, redasubtracao, redamultiplicacao, redadivisao;
	//x = 50;
	//y = 6;
	
    printf("Digite o Primeiro Número: ");
	scanf("%f",&x);
	
	printf("Digite o Segundo Número: ");
	scanf("%f",&y);
	
	redasoma = x + y;
	printf("Soma: %f\n", redasoma);
	
	redasubtracao = x - y;
	printf("Subtração: %f\n", redasubtracao);
	
	redamultiplicacao = x * y;
	printf("Multiplicação: %f\n", redamultiplicacao);
	
	redadivisao = x / y;
	printf("Divisão: %f\n\n", redadivisao);
	
	system ("pause");
	return(0);
}