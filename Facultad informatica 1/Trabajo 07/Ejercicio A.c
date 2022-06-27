/*A) Escribir una función en C que calcule la hipotenusa de dos valores ingresados por teclado que serán
los catetos de un triangulo rectángulo.*/

#include <stdio.h>
#include <math.h>
float pitagoras(float num1,float num2){
float resultado=0;
resultado=sqrt(pow(num1,2)+(pow(num2,2)));
return resultado;
}
int main()
{
float a,b,c;
printf("ingrese el primer valor: ");
scanf("%f",&a);
printf("ingrese el segundo valor: ");
scanf("%f",&b);
c=pitagoras(a,b);
printf("El resultado es: %.2f",c);
return 0;
}