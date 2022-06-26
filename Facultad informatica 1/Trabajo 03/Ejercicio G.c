/*G) Realizar un programa que determine el valor de un resistor en formato SMD ingresado por teclado.
Recordar que los mismos vienen señalizados con un código de 3 dígitos donde:
1) El primer y segundo dígitos indican la primer y segunda cifra del componente .
2) La tercer cifra indica la cantidad de ceros que se ubicaran después de la primer y segunda cifras.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int pc, sc, cc;
    long int res;
    printf("Ingrese el valor del resistor: ");
    scanf ("%1d%1d%1d", &pc, &sc, &cc);
    res = (pc * 10 + sc) * pow (10, cc),
    printf ("El resistor tiene un valor de: %ld", res);

    return 0;
}