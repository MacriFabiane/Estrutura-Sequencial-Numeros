// Informa o resto sem o % . Maria C. Fabiane 30/03/2022

#include<stdio.h>

int main (void)
{
    int num1, num2, resto;

    printf("Insira um numero: ");
    scanf ("%d", &num1);
    printf("Insira um outro numero: ");
    scanf ("%d", &num2);

    resto = num1-num2*(num1/num2);
    printf("O resto eh: %d", resto);

    return 0;

}
