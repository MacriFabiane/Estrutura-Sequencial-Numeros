//Vai calcular o volume de uma caixa retangular com base nas medidas concedidas
//Maria Cristina Fabiane 24/03/2022

#include <stdio.h>

int main(void)
{
    float alt, comp, larg, vol;

    printf ("Informe a altura: ");
    scanf ("%f", &alt);
    printf ("Informe o comprimento: ");
    scanf ("%f", &comp);
    printf ("Informe a largura: ");
    scanf ("%f", &larg);

    vol = alt*comp*larg;

    printf ("O volume da caixa eh: %.2f",vol);
    printf ("cm³");

    return 0;
}
