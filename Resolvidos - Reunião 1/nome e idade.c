#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "");
char nome;
int idade;

printf("Digite a inicial do seu nome: ");
scanf("%c", &nome);

printf("Digite a sua idade: ");
scanf("%i", &idade);

printf("Seu nome �: %c\n", nome);
printf("Voc� tem: %i anos\n\n", idade);

system("pause");	
return (0);
}
