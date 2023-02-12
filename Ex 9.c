// Vai ler um numero de tres digitos separar seus algariosmos e mostrar o inverso dele. Maria C. Fabiane 30/03/2022

#include <stdio.h>

int main (void)
{
    int num, dig1, dig2, dig3;
    printf ("Informe um numero de tres algarismos: ");
    scanf("%d", &num);
    dig1 = num/100; //para mostrar só o primeiro digito e assim por sequencia
    dig2=num%100/10;
    dig3 = num%10;
    printf(" %d eh o primeiro algarismo \n", dig1);
    printf(" %d eh o segundo algarismo \n", dig2);
    printf(" %d eh o terceiro algarismo \n", dig3);
    printf ("E o inverso do numero digitado eh: %d%d%d", dig3,dig2,dig1);

    return 0;

}
