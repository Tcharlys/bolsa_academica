#include <stdio.h>
#include <stdlib.h>

int main(){

float n[6];

int i;


for(i=0 ; i < 6 ; i++){
	
	//nome [i] = 11;
	
	scanf("%f", &n[i]);
	printf("Vetor[%i] = %f\n",i , n[i]);
}

	system ("pause");
    return (0);
}
