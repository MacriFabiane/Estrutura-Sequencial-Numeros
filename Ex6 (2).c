//Vai ler o valor de A e B e troca-los de forma que B=A e A=B
//Maria Cristina Fabiane 24/03/2022

#include <stdio.h>

int main(void)
{
    int variavel1, variavel2;

    printf ("Escreva um numero para A: ");
    scanf("%d", &variavel1);
    printf ("Escreva, agora, um numero para B: ");
    scanf ("%d", &variavel2);

    printf("Valores de A e B antes da troca: \n");
    printf("Valor A: %d\n", variavel1);
    printf("Valor B: %d\n", variavel2);

    printf("Valores de A e B depois da troca: \n");
    printf("Valor de A: %d\n", variavel2);
    printf("Valor de B: %d\n\n\n\n\n\n\n\n\n\n\n", variavel1);


    return 0;

}
