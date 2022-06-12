#include  <stdio.h>
int main () 
{
    int usuario, clave=18276;

    printf ("introduce tu clave: ");
    scanf ("%d", &usuario);

    if (usuario==clave){
        printf (" acceso permitido");

    }

    return 0;
}