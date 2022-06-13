/*Realizar un programa que solicite al operador
ingresar dos números por teclado y mostrar por
pantalla el mayor de ellos.*/

#include <stdio.h>

int main ()
{
    int a,b;

    printf (" Ingrese dos numero: ");
    scanf ("%d %d", &a, &b);

    if ( a < b){

    printf (" El mayor es: %d", b);
    }
    
    else{ 

    printf (" El mayor es: %d", a);
    }
    
    return 0;

}


