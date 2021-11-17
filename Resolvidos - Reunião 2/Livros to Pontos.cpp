#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
setlocale (LC_ALL,"");

int buy_livros;

printf("Digite a quantidade de livros comprados no mês.\n");
scanf("%i", &buy_livros);

if(buy_livros == 1){
	printf("Você comprou 1 livro, então ganhará 5 pontos\n\n");
}
else if(buy_livros == 2){
	printf("Você comprou 2 livros, então ganhará 15 pontos\n\n");
}
else if (buy_livros == 3){
	printf("Você comprou 3 livros, então ganhará 30 pontos\n\n");
}
else if (buy_livros >= 4){
	printf("Você comprou 4 ou mais livros conosco , então ganhará 60 pontos\n\n");
}

system("pause");
return(0);
}
