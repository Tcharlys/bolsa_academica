#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	float Kmh, M;
	
	printf("Vamos converter Km/h em M/s\n");
	printf("Digite um valor em Km/h: ");
	scanf("%f", &Kmh);
	
	M = Kmh/3.6;
	 
	printf("Velocidade em M/s é: %.2f\n\n", M);
	
system("pause");	
return 0;
}