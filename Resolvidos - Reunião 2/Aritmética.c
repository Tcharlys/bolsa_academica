#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	float x, y, redasoma, redasubtracao, redamultiplicacao, redadivisao;
	//x = 50;
	//y = 6;
	
    printf("Digite o Primeiro N�mero: ");
	scanf("%f",&x);
	
	printf("Digite o Segundo N�mero: ");
	scanf("%f",&y);
	
	redasoma = x + y;
	printf("Soma: %f\n", redasoma);
	
	redasubtracao = x - y;
	printf("Subtra��o: %f\n", redasubtracao);
	
	redamultiplicacao = x * y;
	printf("Multiplica��o: %f\n", redamultiplicacao);
	
	redadivisao = x / y;
	printf("Divis�o: %f\n\n", redadivisao);
	
	system ("pause");
	return(0);
}