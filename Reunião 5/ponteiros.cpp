#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int x = 12;
	int y = x;
	x = 45;
	
	int *ponteiro = &x;
	
	int *ponteiro1 = &y;
	
	//*ponteiro = y;
	
	printf("Valor da vari�vel: %i\n\n", x);
	printf("Endere�o de mem�ria da vari�vel: %i\n\n", &x);
	printf("Valor do ponteiro: %i\n\n", *ponteiro);
	printf("Endere�o de mem�ria do ponteiro: %i\n\n", ponteiro);
	printf("Valor do ponteiro: %i\n\n", *ponteiro1);
	
	
	
	
	system("pause");
	return(0);
}
