/*D) Realizar un programa que permita calcular la distancia recorrida por un objeto con Movimiento
Rectilíneo Uniformemente Variado (MRUV) ingresando por teclado la velocidad inicial, la aceleración
y el tiempo. Tener presente las unidades.
Recordar que:
x=x0+v0⋅t+(12
)⋅a⋅t2*/

#include <stdio.h>
#include <math.h>

int main (){
  float x, xo, vo, t, a;
  printf ("Ingrese el valor de Pos. Inicial: ");
  scanf ("%f", &xo);
  printf ("Ingrese el valor de Vel. Inicial: ");
  scanf ("%f", &vo);
  printf ("Ingrese el valor del Tiempo: ");
  scanf ("%f", &t);
  printf ("Ingrese el valor de la Aceleracion: ");
  scanf ("%f", &a);

  x = (xo +(vo* t)+(((1.0 / 2.0)* a)* pow (t, 2)));
  printf ("Pos. Final es : %.2f", x);

  return 0; 
}