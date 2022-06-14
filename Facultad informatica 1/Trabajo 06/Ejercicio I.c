/*I) Modificar el código anterior para que la búsqueda se realice de forma más rápida ordenando
previamente el código.*/

#include <stdio.h>

int main ()
{
    int a [20],b,i;
    for (i=0;i<=20;i++){
        a[i]=i;

    }
    printf (" ingrese el valor");
    printf (" que desea encontrar ");
    printf (" en el arreglo de 20 elementos: ");

    scanf ("%d",&b);
    for (i=0;i<=20;i++){
        if (a[i]==b){

            printf ("El numero esta en la posicion: %d",i);
        }
    }
    return 0;
}