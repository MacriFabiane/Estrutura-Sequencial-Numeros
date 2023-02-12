//Vai fazer diversas operações matematicas utilizando vaores dados às variaveis x e y
//Maria Cristina Fabiane 24/03/2022

#include <stdio.h>
#include <math.h>

int main (void)
{
    int x, y;
    float result;

    printf("De um valor a X: ");
    scanf("%d", &x);
    printf ("De um valor a Y: ");
    scanf ("%d", &y);

    result = (((float)x+y)/y)*pow(x,2);
    printf("Resultado letra a: %f\n", result);

    result =((float)x+y)/(x-y);
    printf ("Resultado letra b: %f\n", result);

    result = ((float)pow(x,2) + pow(y,3))/2;
    printf("Resutado letra c: %f\n", result);

    result = (float)pow(x,3)/pow(x,2);
    printf ("Resultado letra d: %f\n", result);

    result = x%y;
    printf("e1) %f\n", result);

    result = x%3;
    printf("e2) %f\n", result);

    result = y%5;
    printf("e3) %f\n", result);

    return 0;

}
