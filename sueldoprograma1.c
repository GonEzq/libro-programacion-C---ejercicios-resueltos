/*Ingresar el sueldo de una persona, si supera los
3000 pesos mostrar un mensaje en pantalla
indicando que debe abonar impuestos. */

#include <stdio.h>


int main (){

int sueldo, a;

printf ("Ingrese el sueldo: ");
scanf ("%d", &sueldo);

if (sueldo>3000){

    printf ("Tiene que pagar AFIP");

}

 return 0;

}
