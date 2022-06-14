/*H) Escribir un programa que busque en que posición de un arreglo de 20 elementos aleatorios se
encuentra un valor determinado ingresado previamente por teclado.*/

#include <stdio.h>

int main ()

{
    int b,i,a []={0,2,3,4,1,6,5,8,7,9,11,10,13,12,15,14,16,18,17,19,20};

    printf (" Ingrese el valor ");
    printf (" que desea encontrar ");
    printf (" en el arreglo de 20 elementos: ");
    scanf ("%d", &b);
    for (i=0;i<=20;i++){
        if (a[i]==b){
            printf (" El numero esta en la posicion: %d ",i);
        }
    }
}