#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"");

int cont;

printf("Usando o comando For\n\n");

for (cont = 1; cont <= 5; cont ++){
    
	printf("Boa Tarde!\n");
}

printf("\n\n");

printf("Usando o comando While\n\n");

cont = 1;

while(cont <= 5){

	printf("Boa Tarde!\n");
	cont ++;	
}

    system("pause");
    return (0);
}
