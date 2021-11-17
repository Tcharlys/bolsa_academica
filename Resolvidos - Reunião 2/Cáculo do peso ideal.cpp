#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
setlocale (LC_ALL,"");

float h, peso;
char genero;

printf("Digite o seu sexo:\n(H) Homem   (M) Mulher\n");
scanf("%c", &genero);

printf("Digite a sua altura\nInforme a altura em Metros\n");
scanf("%f", &h);

if (genero == 'H' ){
	peso = 72.7 * h;
	printf("Seu peso ideal é: %.2f\n\n", peso);
}
else if (genero == 'M'){
	peso = 62.1 * h;
	printf("Seu peso ideal é: %.2f\n\n", peso);	
}


system("pause");
return(0);
}
