/*I) Escribir el código de un programa que permita calcular la resistencia equivalente de n resistencias
conectadas en paralelo. El programa deberá leer valores ingresados por el teclado hasta que se
ingrese -1, momento en el que devolverá el valor de la resistencia equivalente. Recordar que:
RT= 1
1
R1
+ 1
R2
+ 1
R3
⋯ 1
Rn*/

#include <stdio.h>
int main()
{
float res,total=0;
do{
printf("ingrese el valor de la resistencia en ohms: ");
scanf("%f",&res);
if(res>0){
total = total+(1/res);
} }
while(res>0);
printf("la resistencia total es: %.2f ohms",(1/total));
return 0;
}