//Vai calcular com base na distancia, volume do tanque, e cosumo medio, a quatidade de combustivel gasto de uma cidade a outra
// quantas vezes foi necessario abastecer e o que sobrou no tanque
// Maria Cristina Fabiane 25/03/2022

#include <stdio.h>
#include <math.h>

int main(void)
{
    float dist, tanque, KmL, LNecess, abastecidas, restoTanque;

    printf("Informe a distancia percorrida,em Km, entre cidade A e B: ");
    scanf("%f", &dist);
    printf ("Informe a capacidade maxima do tanque de combustivel, em litros: ");
    scanf("%f", &tanque);
    printf ("Informe a consumo medio em Km/L: ");
    scanf ("%f", &KmL);

    LNecess = dist/KmL;
    printf ("Foram necessarios %.2f litos de combustivel para ir de A a B \n", LNecess);

    abastecidas = LNecess/tanque;
    printf ("Foi necessario abastecer %.2f vezes \n", ceil (abastecidas));

    restoTanque = tanque* ceil (abastecidas) -LNecess;
    printf ("A quantidade de combustivel que sobrou apos a viagem foi %.2f", restoTanque);

    return 0;

}
