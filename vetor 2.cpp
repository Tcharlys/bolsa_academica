#include <stdio.h>
#include <stdlib.h>

int main(){

int n[6] = {1, 3, 4, 6, 7, 8} ;
n [4] = '\0';

int i;

for(i=0; n[i] != '\0'; i++){
	scanf("%i", &n[i]);	
	printf("Vetor[%i] = %i\n",i ,n[i]);
}

	system ("pause");
    return (0);
}
