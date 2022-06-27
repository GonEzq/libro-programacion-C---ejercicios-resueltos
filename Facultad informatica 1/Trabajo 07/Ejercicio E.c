/*E) Modificar el ejercicio B para que ademas calcule los ángulos que se forman en cada vértice.*/

#include <stdio.h>
#include<math.h>
float teorema(float , float, float);
float angulos(float , float, float);
int main()
{
float c1, c2, c3,ang,ang2,ang3;
int i;
do{
printf("ingresar el valor del 1° cateto: ");
scanf("%f", &c1);
printf("ingrese el valor de 2° cateto: ");
scanf("%f",&c2);
printf("ingrese el valor del angulo entre los catetos: ");
scanf("%f",&ang);
c3 = teorema(c1,c2,ang);
ang2= angulos(c2,c1,c3);
ang3=angulos(c3,c2,c1);
printf("el cateto es %.1f \n", c3);
printf("el angulo 2 es %.1f\n",ang2);
printf("el angulo 3 es %.1f\n",ang3);
printf("precione '0' para finalizar: ");
scanf("%d", &i);
}while(i != 0);
printf("fin del programa.\n");
return 0;
} float teorema(float a, float b,float ang){
float c3,rad,pi=3.1415926536;
rad=ang*pi/180;
c3 = sqrt(pow(a, 2)+pow(b, 2)- 2*a*b*cos(rad));
return c3;
} float angulos(float a, float b, float c
){
float ang,pi=3.1415926536;
ang= acos((pow(b,2)- pow(c,2)-pow(a,2))/ (c*a*(- 2)));
ang=ang*180/pi;
return ang;
}