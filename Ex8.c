// ler numero de 5 digitos, mostra-los separadamente e soma-los. Maria C. Fabiane 30/03/2022

#include<stdio.h>

int main (void)
{
    int num, dig1, dig2, dig3, dig4, dig5, soma;

    printf ("Digite um numero de 5 digitos: ");
    scanf ("%d", &num);
    dig1 = num/10000;
    dig2 = num%10000/1000;
    dig3 = num%10000%1000/100;
    dig4 = num%10000%1000%100/10;
    dig5 = num%10;
    printf ("O primeiro digito eh: %d\n", dig1);
    printf ("O segundo digito eh: %d\n", dig2);
    printf ("O terceiro digito eh: %d\n", dig3);
    printf ("O quarto digito eh: %d\n", dig4);
    printf ("O quinto digito eh: %d\n", dig5);

    soma= dig1+dig2+dig3+dig4+dig5;
    printf (" A soma dos digitos eh: %d", soma);

    return 0;

}

