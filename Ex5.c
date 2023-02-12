//Inforama o salário liquido após descontos do INSS e IR
//Maria Cristina Fabiane 14/03/2022

#include <stdio.h>

int main(void)
{
    float salBruto, inss, ir, salLiq;

    printf ("Informe o salario bruto: ");
    scanf ("%f", &salBruto);
    printf ("Informe a porcentagem do INSS: ");
    scanf ("%f", &inss);
    printf ("Informe a porcentagem do IR: ");
    scanf ("%f", &ir);

    salLiq = salBruto - (inss*100/salBruto)-(ir*100/salBruto);

    printf("O salario liquido sera: %f", salLiq);

    return 0;
}
