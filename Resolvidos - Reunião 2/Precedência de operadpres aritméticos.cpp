#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale (LC_ALL,"");

//Preced�ncia de operadores aritm�ticos em C

float n1, n2, n3, n4, x, x2, x3, x4;

n1 = 10;
n2 = 34;
n3 = 65;
n4 = 78;
x = 0;

x = (n1 - n2) * (n3 + n4);
x2 = (n3 / n1 + n2) * n4;
x3 = n3 / (n1 * n4) - n2;
x4 = n3 - n4 * n1 - (n2 * n2 - n2);

printf("Express�o 1: %.2f\n", x);
printf("Express�o 2: %.2f\n", x2);
printf("Express�o 3: %.2f\n", x3);
printf("Express�o 4: %.2f\n", x4);




system("pause");
return(0);
}
