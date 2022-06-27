/*6) Diseñe un algoritmo que lea un número de tres cifras y determine si es igual al revés del número.*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf ("Ingrese un numero de 3 digitos: ");
    scanf ("%1d%1d%1d", &a, &b, &c);
    
    if (a==c){
        printf ("El numero es capicua.");
    }
    else {
        printf ("El numero no es capicua.");
    }

    return 0;
}