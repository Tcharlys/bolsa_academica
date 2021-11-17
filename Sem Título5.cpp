#include <stdio.h>
#include <stdlib.h>

int main(){

float n[3][3] = {{1,2,6} ,
				{3,4,19} , 
				{12,45,67}};

printf("%f\n", n[0][0]);

printf("%f\n", n[0][1]);

printf("%f\n\n", n[0][2]);

printf("%f\n", n[1][0]);

printf("%f\n", n[1][1]);

printf("%f\n\n", n[1][2]);

printf("%f\n", n[2][0]);

printf("%f\n", n[2][1]);

printf("%f\n\n", n[2][2]);

	system ("pause");
    return (0);
}
