#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	struct estr{
		int a = 12;
		int b = 3456;
		float c = 12.54;
		double d = 456.4374;
	};
	
	struct estr estrutura, *p1;
	p1 = &estrutura;
	
	(*p1).a = 12;
	p1->b = 3456;
	p1->c = 12.54;
	p1->d = 456.4374;
	
	
	struct estr estrutura_2;
	
	float soma = 200;
	
	estrutura_2.a = soma + p1->a;
	estrutura_2.b = soma + p1->b;
	estrutura_2.c = soma + p1->c;
	estrutura_2.d = p1->d + p1->a;
	
	printf("%i\n\n", estrutura.a);
	printf("%i\n\n", estrutura.b);
	printf("%f\n\n", estrutura.c);
	printf("%lf\n\n", estrutura.d);
	
	printf("Soma\n");
	
	printf("%i\n\n", estrutura_2.a);
	printf("%i\n\n", estrutura_2.b);
	printf("%f\n\n", estrutura_2.c);
	printf("%lf\n\n", estrutura_2.d);
	printf("%i\n\n", estrutura_2.a);
	
	system("pause");
	return(0);
}
