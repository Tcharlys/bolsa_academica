#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	
	printf("Digite os n�meros para resolver a express�o n�merica: \nA+B-C*D=? \n");
	
	int a, b, c, d, ex;
	
	scanf("%i%i%i%i", &a, &b, &c, &d);
	
	ex = a + b - c * d;
	
	printf("O reultado da express�o �: %i\n", ex);
	
	system("pause");
	return(0);
	
}