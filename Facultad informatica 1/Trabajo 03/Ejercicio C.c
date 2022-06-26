/*C) Realizar un programa que lea la hora ingresada por teclado (con el formato HH:MM:SS) y calcule la
hora en otro huso horario. Se debe ingresar la diferencia de husos horarios por teclado.
Investigar como leer la hora directamente desde la PC y modificar el programa anterior para que solo
se deberá ingresar la diferencia de husos horarios desde por teclado.*/

#include <stdio.h>

int main()
{
    int h1, m, s, dh, h2;
    printf ("Bienvenido, ingrese la hora: ");
    scanf ("%d %d %d", &h1, &m, &s);
    printf ("La hora ingresada es: %d:%d:%d", h1, m, s);
    printf ("\nIngrese la diferencia de horario: ");
    scanf ("%d", &dh);
    h2 = h1 + dh;
    printf ("La nueva hora es: %d:%d:%d", h2, m, s);

    return 0;
}
