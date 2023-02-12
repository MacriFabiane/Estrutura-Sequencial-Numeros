//Pega o salario de uma pessoa e calcula a porcentagem de aumentos e de descontos Maria C. Fabiane 30/03/2022

#include<stdio.h>

int main (void)
{
    float porcentAu, porcentDec, salario, salAu, salLiq;

    printf("Informe o salario atual:R$ ");
    scanf("%f", &salario);
    printf ("Informe o aumento em porcentagem (10 para 10%%): ");
    scanf ("%f", &porcentAu);
    printf ("Informe a porcentagem de descontos (10 para 10%%): ");
    scanf("%f", &porcentDec);

    salAu = salario+ (salario*porcentAu/100);
    printf ("O salario aumentado eh: %.2f\n", salAu);

    salLiq = salAu - (salAu*porcentDec/100);
    printf ("O salario liquido eh: %.2f\n", salLiq);

    return 0;

}
