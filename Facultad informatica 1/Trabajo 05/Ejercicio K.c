/*K) Realizar un programa que pregunte al usuario por la contraseña hasta que introduzca la contraseña
correcta. El programa deberá leer una cadena de caracteres ingresada por teclado y comparar ese
valor con una contraseña escrita en el programa.*/



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