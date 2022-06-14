/*F) Un programa en C debe pedir al usuario que ingrese una cadena de caracteres por teclado y el
programa debe escribir en pantalla la misma cadena de texto pero de forma vertical.*/

#include <stdio.h>

int main ()
{
    char cadena [20];
    int i;

        printf ("Ingrese una palabra y se escribira verticalmente: ");
        scanf ("%s", cadena);

        for (i=0; i<20; i++){
            if (cadena [i] == '\0'){
                break;
            }
            else {
                printf ("\n%c", cadena [i]);
            }
        }
        return 0;
}