#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"");

int horas, dias, mediasono, resp;

do{
	printf("Qual a quantidade de horas que você tem dormido?\n");
	scanf("%i", &horas);
	
	printf("Calcularemos de acordo com uma semana 7 dias\n");
	
	mediasono = (horas * 7) / 7;
	
	printf("Você dormiu %i em média por semana\n\n", mediasono);
	
	printf("Sastifeito?\n");
	printf("Digite (1) para sim\nDigite (2) para não\n");
	printf("Se não executaremos novamente, caso contrário encerraremos.\n");
	scanf("%i", &resp);
	
	
} while (resp == 2);

    system("pause");
    return (0);
}
