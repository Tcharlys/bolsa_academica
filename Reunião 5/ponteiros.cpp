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
	
	printf("Valor da variável: %i\n\n", x);
	printf("Endereço de memória da variável: %i\n\n", &x);
	printf("Valor do ponteiro: %i\n\n", *ponteiro);
	printf("Endereço de memória do ponteiro: %i\n\n", ponteiro);
	printf("Valor do ponteiro: %i\n\n", *ponteiro1);
	
	
	
	
	system("pause");
	return(0);
}
