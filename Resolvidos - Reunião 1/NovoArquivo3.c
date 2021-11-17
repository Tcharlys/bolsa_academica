#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	
	printf("Digite os números para resolver a expressão númerica: \nA+B-C*D=? \n");
	
	int a, b, c, d, ex;
	
	scanf("%i%i%i%i", &a, &b, &c, &d);
	
	ex = a + b - c * d;
	
	printf("O reultado da expressão é: %i\n", ex);
	
	system("pause");
	return(0);
	
}