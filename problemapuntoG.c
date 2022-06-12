
#include <stdio.h>
#include <math.h>


int main ()

{
int pc,sc,cc;
long int valores;


    printf ("ingrese el valor del restar:");
    scanf ("%d, %d, %d", &pc &sc &cc);
    
    valores = ( pc * 10 + sc) * pow (10,cc);

    printf(" El resistor tiene el valor de : %ld", valores);
    
    return 0;
}