#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
setlocale (LC_ALL,"");

int buy_livros;

printf("Digite a quantidade de livros comprados no m�s.\n");
scanf("%i", &buy_livros);

if(buy_livros == 1){
	printf("Voc� comprou 1 livro, ent�o ganhar� 5 pontos\n\n");
}
else if(buy_livros == 2){
	printf("Voc� comprou 2 livros, ent�o ganhar� 15 pontos\n\n");
}
else if (buy_livros == 3){
	printf("Voc� comprou 3 livros, ent�o ganhar� 30 pontos\n\n");
}
else if (buy_livros >= 4){
	printf("Voc� comprou 4 ou mais livros conosco , ent�o ganhar� 60 pontos\n\n");
}

system("pause");
return(0);
}
