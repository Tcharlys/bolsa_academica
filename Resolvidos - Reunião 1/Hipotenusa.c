#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	printf("Descobrindo a Hipotenusa:\n");
	float x, y, h;
	
	printf("Digite o Primeiro Número: ");
	scanf("%f", &x);
	
	printf("Digite o Segundo Número: ");
	scanf("%f", &y);
	
	
	//h = sqrt((x*x) + (y*y));
	h = sqrt(pow(x,2) + pow(y, 2));
	
	printf("Resultado da Hipotenusa: %f\n\n", h);
	
system ("pause");
return (0);
}