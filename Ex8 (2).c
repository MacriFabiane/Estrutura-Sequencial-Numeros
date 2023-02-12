// Vai clacular o preço que o consumidor vai pagar de um automovel apos os acrecimos de porcentagem de distribuidor e imposto
//Maria Cristina Fabiane 24/03/2022

#include <stdio.h>

int main(void)
{
    float fabCust, dist, impo, consCust;

    printf ("Informe o custo de fabrica do automovel: ");
    scanf ("%f", &fabCust);
    printf ("Informe a porcentagem do distribuidor (0 a 100): ");
    scanf ("%f", &dist);
    printf ("Informe a porcentagem dos impostos (0 a 100): ");
    scanf ("%f", &impo);

    consCust = fabCust +(dist*fabCust/100)+(impo*fabCust/100);

    printf("O preco do automovel ao consumidor eh: %f", consCust);

    return 0;
}
