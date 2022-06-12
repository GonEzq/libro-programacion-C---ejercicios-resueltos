//Expresion Aritmetica 4

#include <stdio.h>
#include <math.h>

int main ()

{

    float a=10, b=4, c=3, d=2,e=1, resultado;

    resultado = pow (a,4) + pow(a,3) + (e/d * pow(a,2)) - a;
    printf ("El resultado es: %0.f", resultado);

    return 0;
}