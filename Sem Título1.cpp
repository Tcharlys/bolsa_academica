#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	char nome[] = "Charlys Jerfeson";
	int i;
	
	for(i=0; i<23; i++){	
		printf("%c\n", nome[i]);
	}
	
	system("pause");
	return(0);
}
