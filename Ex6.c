#include <stdio.h>
int main (void)
{
    float salario, reais, cent;

    printf("Informe o valor do salario:R$ ");
    scanf ("%f", &salario);

    reais = (int)salario;
    cent = (salario-reais)*100;
    printf("O valor informado eh %.0f reais e %.0f centavos", reais, cent);

    return 0;
}
