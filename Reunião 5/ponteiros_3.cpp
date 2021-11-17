#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	struct horario{
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};
	
int main(){
	
	setlocale(LC_ALL,"");
	
	struct horario presente;
	
	int hora = 90;
	int minuto = 59;
	int segundo = 34;
	
	presente.pHora = &hora;
	presente.pMinuto = &minuto;
	presente.pSegundo = &segundo;
	
	int soma = 34;
	
	printf("Hora -> %i\n", *presente.pHora);
	printf("Minuto -> %i\n", *presente.pMinuto);
	printf("Segundo -> %i\n\n", *presente.pSegundo);
	
	*presente.pHora = 100 + *presente.pHora;
	*presente.pMinuto = soma + *presente.pMinuto;
	*presente.pSegundo = 13 + *presente.pSegundo;
	
	printf("Hora -> %i\n", *presente.pHora);
	printf("Minuto -> %i\n", *presente.pMinuto);
	printf("Segundo -> %i\n\n", *presente.pSegundo);
		
	system("pause");
	return(0);
}
