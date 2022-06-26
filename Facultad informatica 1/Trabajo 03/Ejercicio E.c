/*E) Realizar un programa que permita calcular el determinante de una matriz de 2x2 ingresando por
teclado el valor de cada uno de los elementos de la matriz.*/

#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf ("Bienvenido, ingrese los digitos de A, B, C y D necesarios: ");
    scanf ("%d %d %d %d", &a, &b, &c, &d);
    e = a*c+b*d;
    printf ("El determinante de la matriz es: %d", e);

    return 0;
}