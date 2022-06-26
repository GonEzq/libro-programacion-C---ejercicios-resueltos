/*J) Realizar un programa que permita ingresar la edad de dos personas y determine cual es la mayor de
ellas. Si ambas tienen la misma edad el programa también deberá indicarlo.
Modificar el programa para que ademas de la edad de las personas, permita ingresar su nombre.*/

#include <stdio.h>
#include <string.h>

int main()
{   
    char a1[20], b1[20];
    int a, b;
    printf("Ingrese las edades: ");
    scanf ("%d %d", &a, &b);
    printf ("Ingrese los nombres: ");
    scanf ("%s %s", &a1, &b1);
    
    if (a>b){
        printf ("%s es mayor que %s.", a1, b1);
    }
    else if (a==b){
        printf ("ambos tienen la misma edad");
    }
    else{
        printf ("%s es mayor que %s", b1, a1);
    }
    return 0;
}