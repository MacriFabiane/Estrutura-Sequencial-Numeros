//Informa o saldo devedor e o total de prestaçoes pagas de um consórcio. Maria Cristina Fabiane 30/03/2022

#include <stdio.h>

int main (void)
{
    float valor, deve, totalPg;
    int prest, pagas;

    printf("Informe o numero total de prestacoes: ");
    scanf("%d", &prest);
    printf("Informe o numero de prestacoes pagas: ");
    scanf ("%d", &pagas);
    printf("Informe o valor fixo das prestacoes: ");
    scanf ("%f", &valor);

    totalPg= (float)pagas*valor;
    printf("O valor total ja pago foi: %.2f\n", totalPg);

    deve= (prest-pagas)*valor;
    printf("Saldo devedor: %.2f\n\n", deve);

    return 0;
}
