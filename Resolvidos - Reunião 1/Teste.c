#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	float a, b, h;
	
	scanf("%f%f", &a, &b);
	
	h = sqrt ((a*a) + (b*b));
	//h = sqrt(pow(a, 2) + pow(b, 2));
	
	printf("Resultado: %f\n", h); 
	
	system("pause");
	return (0);	
}