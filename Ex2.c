/* Recebe o valor de uma pretação e da taxa de juros calculando o novo valor com juros.
Maria Cristina Fabiane 24/03/2022 */

#include <stdio.h>

int main (void)
{
    float prest, taxa, valorCJuros;

    printf ("Insira o valor da prestacao: ");
    scanf ("%f", &prest);
    printf ("Insira a taxa de juros em %%: ");
    scanf ("%f", &taxa);

    valorCJuros = prest+ (prest*taxa/100);

    printf ("O valor com juros da parcela eh:R$ %.2f\n\n", valorCJuros);

    return 0;
}
