/*L) Escribir un programa que funcione como una calculadora. Primero se ingresaran los dos números, y
luego se indicara la operación a realizar (1 – Suma, 2 – Resta, 3 – Multiplicación, 4 – División).*/


#include <stdio.h>

int main(){
    
    printf ("Bienvenido. Seleccione la operacion matematica que desea realizar.\n");
    printf ("1. Suma.       2. Resta       3. Multiplicacion.       4)Division.       \n");
    int num, n1, n2, c=0;
    scanf ("%d", &num);
    switch (num)
        {
        case 1 :
            scanf ("%d", &n1);
            scanf ("%d", &n2);
            c = n1 + n2;
            printf ("\nSuma: %d", c);
            break;
        case 2 :
            scanf ("%d", &n1);
            scanf ("%d", &n2);
            c = n1 - n2;
            printf ("\nResta: %d", c);
            break;
        case 3 :
            scanf ("%d", &n1);
            scanf ("%d", &n2);
            c = n1 * n2;
            printf ("\nMultiplicacion: %d", c);
            break;
        case 4 :
            scanf ("%d", &n1);
            scanf ("%d", &n2);
            c = n1 / n2;
            printf ("\nDivision: %d", c);
            break;
        }
    return 0;
}