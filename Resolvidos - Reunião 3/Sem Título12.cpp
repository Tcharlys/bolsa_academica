#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"");

int horas, dias, mediasono, resp;

do{
	printf("Qual a quantidade de horas que voc� tem dormido?\n");
	scanf("%i", &horas);
	
	printf("Calcularemos de acordo com uma semana 7 dias\n");
	
	mediasono = (horas * 7) / 7;
	
	printf("Voc� dormiu %i em m�dia por semana\n\n", mediasono);
	
	printf("Sastifeito?\n");
	printf("Digite (1) para sim\nDigite (2) para n�o\n");
	printf("Se n�o executaremos novamente, caso contr�rio encerraremos.\n");
	scanf("%i", &resp);
	
	
} while (resp == 2);

    system("pause");
    return (0);
}
