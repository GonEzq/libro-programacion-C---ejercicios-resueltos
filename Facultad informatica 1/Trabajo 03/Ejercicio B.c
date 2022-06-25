/*B) Escribir un programa que permita transformar un valor de temperatura en grados Celsius ingresado
por teclado, a su equivalente en grados Fahrenheit. Recordar que:
(° F)=1,8⋅(°C)+32*/

#include <stdio.h>

int main ()

{ 
    float f,e;

        printf ("ingrese el valor en celcius para convertir a fahrenheir \n");
        scanf ("%f", &e);
        f=1.8*e+32;
        printf ("resultado igual a: %.2f",f);

        return 0;

}