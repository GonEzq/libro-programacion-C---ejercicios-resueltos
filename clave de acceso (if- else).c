/*Simulación de clave
de acceso, solicitar
al operador clave de
acceso, si es
correcto, imprimir
por pantalla “Acceso
permitido”.
Si es incorrecto
imprimir “Acceso
denegado”.*/

#include <stdio.h>

int main ()
{
    int usuario, clave = 18276;

    printf ("Introduce tu clave: ");
    scanf ("%d", &usuario);

    if (usuario == clave) {

        printf ("acceso permitido");

    }

    else {
        printf ("acceso denegado");

    }

    return 0;

}