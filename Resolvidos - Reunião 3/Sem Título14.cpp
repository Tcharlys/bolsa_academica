#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"");

int x = 0;

printf("Usando o Continue\n\n");

for (x = 0 ; x <= 18; ++x){
	
	if((x == 3) || (x == 9)){
		
		continue;	
	}
	printf("%i ", x);
}

printf("\n\n");

printf("Usando o Break\n\n");
for (x = 0 ; x <= 18; ++x){
	
	if((x == 3) || (x == 9)){
		
		break;	
	}
	printf("%i ", x);
}

printf("\n\n");
    system("pause");
    return (0);
}
