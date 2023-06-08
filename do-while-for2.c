#include <stdio.h>

float r;
int a,b;


int main ()

{

    char car;
    
    scanf ("%d %d %c", &a, &b, &car);
    printf ("Los valores de datos son: %d, %d",a,b);
    

    switch (car)
    {
    case 's': r = a + b; /* constant-expression */
    break;

    case 'r': r = a - b;
    break;

    case 'm': r = a * b;
    break;

    case 'd': r = a / b;
        break;
    
    default:
        break;
    }
    printf ("\nCodigo de la operacion: %c", car);
    printf ("\nResultado: %f", r);

    return 0;

}
