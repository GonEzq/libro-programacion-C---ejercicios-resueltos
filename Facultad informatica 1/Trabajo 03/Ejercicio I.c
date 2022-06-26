/*I) Realizar un programa que lea las notas obtenidas en un examen y determine si el estudiante esta
promocionado, regular o libre.*/

#include <stdio.h>

int main()
{
    
    int a, b;
    float c, d;
    
    printf("Ingrese la nota del primer parcial: ");
    scanf ("%d", &a);
    printf("Ingrese la nota del segundo parcial: ");
    scanf ("%d", &b);
    d=a+b;
    c=d/2;
    
    printf ("El promedio es: %.2f.\n", c);
    if (c>=7&&c<=10){
        printf ("El alumno esta promocionado.");
    }
    else if (c>5&&c<7){
        printf ("El alumno esta regular.");
    }
    else if (c<=5&&c>0){
        printf ("El alumno esta libre.");
    }
    else{
        printf ("Promedio no valido, ingrese notas entre 1 y 10.");
    }
    
    return 0;
}