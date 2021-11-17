#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int a;
	char b;
	float c;
	double d;
	
	struct x {
		int a;
		double b;
		int c;
		int d;
		};
		
	struct x estrutura;
	
	int vetor[20];
	char vetor1[21];
	float vetor2[22];
	double vetor3[23];
	
	int matriz[20][2];
	char matriz1[21][3];
	float matriz2[22][4];
	double matriz3[23][5];
		
	printf("%i\n", sizeof(a));
	printf("%i\n", sizeof(b));
	printf("%i\n", sizeof(c));
	printf("%i\n\n", sizeof(d));
	
	printf("%i\n", sizeof(int));
	printf("%i\n", sizeof(char));
	printf("%i\n", sizeof(float));
	printf("%i\n\n", sizeof(double));
	
	printf("EStrutura\n\n");
	printf("%i\n\n", sizeof(estrutura));
	printf("%i\n", sizeof(estrutura.a));
	printf("%i\n", sizeof(estrutura.b));
	printf("%i\n", sizeof(estrutura.c));
	printf("%i\n\n", sizeof(estrutura.d));
	
	printf("Vetor\n\n");
	printf("%i\n", sizeof(vetor));
	printf("%i\n", sizeof(vetor1));
	printf("%i\n", sizeof(vetor2));
	printf("%i\n\n", sizeof(vetor3));
	
	printf("Matrizes\n\n");
	printf("%i\n", sizeof(matriz));
	printf("%i\n", sizeof(matriz1));
	printf("%i\n", sizeof(matriz2));
	printf("%i\n\n", sizeof(matriz3));
	
	
	float *x = (float *) malloc(sizeof(float));
	*x = 10000;
	
	int *y = (int *) malloc(sizeof(int));
	*y =  12 + *x;
	
	float *z = (float *) malloc(sizeof(float));
	*z = 90321;
	
//	float y = (float *) malloc(sizeof(float));
	
	printf("\tFUNÇÂO MALLOC\n\n");
	printf("%.2f\n", *x);
	printf("%i\n", *y);
	printf("%.2f\n\n", *z);
	
	printf("\tFUNÇÂO CALLOC\n\n");
	
	int *p = (int  * ) calloc(2, sizeof(int));
	printf("%i\n", *p);
	
	*p = 45;
	
	printf("%i\n", *p);
	
	*(p+1) = 23;
	
	printf("%i\n\n", p[1]);
	
	float *m = (float *) calloc (3, sizeof(float));
	
	*m = 45.678;
	
	printf("%.3f\n", m[0]);
	
	*(m+1) = 21.65;
	
	printf("%.3f\n", m[1]);
	
	*(m+2) = 54;
	
	printf("%.3f\n", m[2]);
	
	printf("\tFUNÇÂO REALLOC\n\n");
	
	int *v = (int *) malloc(2*sizeof(int));
	
	v[0] = 12;
	v[1] = 2;
	
	printf("%i\n", v);
	printf("%i\n", v[0]);
	printf("%i\n\n", v[1]);
	
	v = (int *) realloc(v, 5*sizeof(int));
	
	v[2] = 1;
	v[3] = 45;
	v[4] = 65;

	int *er = (int *) realloc (v, 6*sizeof(int));
	
	er[5] = 409;
	
	printf("%i\n", v);
	printf("%i\n", v[0]);
	printf("%i\n", v[1]);
	printf("%i\n", v[2]);
	printf("%i\n", v[3]);
	printf("%i\n\n", v[4]);
	
	printf("%i\n", er);
	printf("%i\n", er[0]);
	printf("%i\n", er[1]);
	printf("%i\n", er[2]);
	printf("%i\n", er[3]);
	printf("%i\n", er[4]);
	printf("%i\n\n", er[5]);
	
	
	system("pause");
	return(0);
}
