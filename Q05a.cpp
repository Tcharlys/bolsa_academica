#include <stdio.h>
#include <stdlib.h>

double fatorial(int num)
{
    int i;
    double fact = 1.0;

    for (i = num; i > 1; i-- )
        fact = fact * i;

    return fact;
}

int main ()
{
    int n, i;
    double e = 0.0;

    printf("Digite o numero de termos a serem calculados: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        e = e + 1.0/fatorial(i);

    printf("\n\nNumero neperiano: %.15f", e);

    return 0;
}
