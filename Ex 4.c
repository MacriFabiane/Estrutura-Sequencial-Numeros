// Le um numero de tres digitos e faz a soma desses digitos. Maria C. Fabiane 30/03/2022

#include <stdio.h>

int main (void)
{
    int num, cent, dez, unid, soma;

    printf("Informe um numero de tres digitos: ");
    scanf("%d", &num);

    cent = num/100;
    dez = num%100/10;
    unid = num%10;

    soma = cent+ unid + dez;
    printf("A soma dos digitos eh: %d ", soma);

    return 0;

}
