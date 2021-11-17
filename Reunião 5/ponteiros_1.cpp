#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	
	int x = 12;
	char a = 'f';
	float y = 12.3;
	double b = 14.678;
	
	int *pX = &x;
	char *pA = &a;
	float *pY = &y;
	double *pB = &b;
//	float *pI = 123213;
	
	double soma = *pX + *pB;
	
	printf("Endereço: %p	Valor: %i\n\n", pX, *pX);
	printf("Endereço: %p	Valor: %c\n\n", pA, *pA);
	printf("Endereço: %p	Valor: %f\n\n", pY, *pY);
	printf("Endereço: %p	Valor: %lf\n\n", pB, *pB);
	printf("Soma: %lf\n\n", soma);
//	printf("Valor: %i\n\n", *pI);
	
	
	
	
	system("pause");
	return(0);
}
