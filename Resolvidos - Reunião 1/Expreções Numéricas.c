#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale (LC_ALL,"");
float n1, n2, n3, n4, n5, re;
printf("Calcule a seguinte Express�o -> x + y * a - b / c" );
 
scanf("%f\n", &n1);
scanf("%f\n", &n2);
scanf("%f\n", &n3);
scanf("%f\n", &n4);
scanf("%f\n", &n5);

re = ((n1 + n2) * (n3 - n4) / n5);

printf(" O Resuldato da Express�o �: %.2f\n\n",re);  
system("pause");
return (0);
}