//Calcula a média ponderada de 3 notas com pesos de 1 a 3
//Maria Cristina Fabiane 24/03/2022

#include <stdio.h>

int main(void)
{
    float not1, not2, not3, media;

    printf ("Escreva a nota 1: ");
    scanf ("%f", &not1);
    printf ("Escreva a nota 2: ");
    scanf ("%f", &not2);
    printf ("Escreva nota 3: ");
    scanf ("%f", &not3);

    media = (not1*1+ not3*3+ not2*2)/6;

    printf("A media ponderada eh: %.2f\n\n\n", media);

    return 0;

}
