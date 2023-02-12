// Pega o valor do troco de um caixa e fornece separado a parte dos reais e dos centavos. Macria C. Fabiane

#include <stdio.h>

int main(void)
{
    float troco, reais, cent;

    printf("Informe o valor do troco:R$ ");
    scanf ("%f", &troco);

    reais = (int)troco;
    cent = (troco-reais)*100;
    printf("O valor informado eh %.0f reais e %.0f centavos", reais, cent);

    return 0;
}
