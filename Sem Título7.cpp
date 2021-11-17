#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "");
	
	int n1,n2, maior;
	
	scanf("%i%i", &n1, &n2);
	
	maior = (n1>n2 ? n1 : n2);
	
	printf("O número maior é %i\n\n", maior);
	
	system("pause");
	return (0);
}
