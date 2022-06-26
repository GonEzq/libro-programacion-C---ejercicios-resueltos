/*K) Escribir un programa que permita determinar si tres valores enteros diferentes de cero ingresados
por teclado corresponden a un triangulo rectángulo. De ser así, en pantalla se deberá desplegar el
mensaje “Es un triangulo rectángulo”, o en caso contrario “Los valores no corresponden a los lados
de un triangulo rectángulo”.*/

#include <stdio.h>
#include <math.h>

int main(){

    float hip, c1, c2, a, b;

    printf("Ingrese los 3 lados: ");
    scanf("%f %f %f", &hip, &c1, &c2);

    a=(pow(hip,2));
    b=((pow(c1,2))+(pow(c2,2)));
    if(a==b){
        printf("Es un triangulo rectangulo.\n");
        }
    else {
        printf("Los valores no corresponden a los lados de un triangulo rectangulo.\n");
    }

    return 0;
}