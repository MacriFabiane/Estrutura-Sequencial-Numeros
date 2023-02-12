//Vai a partir de dois numeros inseridos fazer diversas operações matematicas
//Maria Cristina Fabiane 24/03/2022

#include <stdio.h>

int main(void)
{
    int num1, num2, soma, sub, div, mult, rest;
    float divf;

    printf("Digite um numero: ");
    scanf ("%d", &num1);
    printf ("Agora outro: ");
    scanf ("%d", &num2);

    soma = num1+ num2;
    printf("A soma eh: %d\n",soma);

    sub =num1-num2;
    printf ("A subtracao eh: %d\n",sub);

    div =num1/num2;
    printf ("A divisao eh: %d\n",div);

    divf = (float)num1/num2;
    printf ("A divisao float eh: %f\n",divf);

    rest = num1%num2;
    printf (" O resto da divisao eh: %d\n",rest);

    mult = num1*num2;
    printf (" A multiplicacao eh: %d", mult);

    return 0;


}
