#include <stdio.h>

int main (void)
{
    double num, parteDec;
    int parteInt, parteDecInt, unid, dezena, cent, soma;

    printf("Informe um numero com casas decimais: ");
    scanf ("%lf", &num);

    parteInt = (int)num;
    printf (" Parte inteira: %d\n", parteInt);

    parteDec = num - parteInt;
    printf (" Parte decimal: %lf\n", parteDec);

    parteDecInt = parteDec * 1000;
    printf (" Parte decimal como inteiro de 3 digitos: %d\n", parteDecInt);

    cent = parteInt/100;
    printf (" Centena: %d\n", cent);

    dezena = (parteInt%100)/10;
    printf (" Dezena: %d\n", dezena);

    unid = parteInt%100%10;
    printf (" Unidade: %d ou\n", unid);
    unid = parteInt%10;
    printf (" Unidade: %d\n", unid);

    soma= cent+dezena+unid;
    printf (" A soma dos 3 primeiros digitos eh: %d\n", soma);


    return 0;
}
