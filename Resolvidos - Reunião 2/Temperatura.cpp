#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale (LC_ALL,"");

int opcao;
float note_temp1, note_temp2, note_temp3, pro_temp1, pro_temp2, pro_temp3, media_temp, media_temppro;

printf("Para saber se as temperatura media notebook (1)\n");
printf("Para saber se as temperatura media Processador (2)\n");
scanf("%i", &opcao);

switch (opcao){
	case 1:
		printf("Digite temperaturas em Graus Celsius (°C)\n");
		printf("Informe a temperatura atual do seu notebook\n");
		scanf("%f", &note_temp1);

		printf("Informe a temperatura máxima do seu notebook\n");
		scanf("%f", &note_temp2);

		printf("Informe a temperatura mínima do seu notebook\n");
		scanf("%f", &note_temp3);

		media_temp = note_temp1 + note_temp2 + note_temp3 / 3;

			if(media_temp >=30 || media_temp <= 45){
				printf("Seu notebook está na temperatura ideal, Fique tranquilo\n\n");
				}
					else{
					printf("Seu notebook não esta na temperatura ideal, Fique mais atento.\n\n");
					}							

	break;
			case 2:
				printf("Digite temperaturas em Graus Celsius (°C)\n");
				printf("Informe a temperatura atual do processador\n");
				scanf("%f", &pro_temp1);

				printf("Informe a temperatura máxima do processador atingiu\n");
				scanf("%f", &pro_temp2);

				printf("Informe a temperatura mínima do processador atingiu\n");
				scanf("%f", &pro_temp3);

				media_temppro = pro_temp1 + pro_temp2 + pro_temp3 / 3;

					if(media_temppro >=40 || media_temppro <= 65){
						printf("O processador do seu notebook está na temperatura ideal, Fique tranquilo!\n\n");
						}
						else{
						printf("O processador do seu notebook está na temperatura ideal, Fique tranquilo!\n\n");
						}
			break;
				default:
					printf("Opção inválida!!\nDigite valores somente de 1 a 2.\n\n");
}

system("pause");
return(0);
}
