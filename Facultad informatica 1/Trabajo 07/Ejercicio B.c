/*B) Modificar el ejercicio anterior para que pueda utilizarse con cualquier tipo de triangulo. Tenga
presente que deberá utilizar el Teorema del Coseno y que ademas de los dos lados se deberá
ingresar el angulo entre los lados ingresados.
c2=a2+b2−2⋅a⋅b⋅cos(γ )*/

#include <stdio.h>
#include <math.h>
float pitagoras(float num1,float num2, float y){
float resultado=0;
resultado=sqrt(pow(num1,2)+(pow(num2,2))-2*num1*num2*cos(y));
return resultado;
}
int main()
{
float a,b,c,d;
printf("ingrese el primer valor: ");
scanf("%f",&a);
printf("ingrese el segundo valor: ");
scanf("%f",&b);
printf("ingrese un angulo: ");
scanf("%f",&c);
d=pitagoras(a,b,c);
printf("El resultado es: %.2f",d);
return 0;}