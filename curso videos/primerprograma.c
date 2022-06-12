// Directivas del procesador y variables

#include <stdio.h> // Libreria

#define PI 3.1416 // Macro -----> no cambia el valor en todo el programa

int y = 5; // Varible global

int main () {

    int x=10;
    float suma=0;

    suma = PI + x;

    printf ("La suma es: %.3f", suma);

    return 0;

}