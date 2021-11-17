#include <stdio.h>
#include <stdlib.h>

int main(){

int nome[6] = {1, 3, 4, 6, 7, 8};
nome [5] = '\0';

int i;

for(i=0 ; nome[i] != '\0' ; i++){
	printf("Vetor[%i] = %i\n",i , nome[i]);
}

	system ("pause");
    return (0);
}
