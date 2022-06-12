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