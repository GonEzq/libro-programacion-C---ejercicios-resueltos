/*C) Modificar el programa anterior para que la cantidad de estudiantes pueda ser variable. Se deberá
ingresar en primera instancia la cantidad de estudiantes por teclado. Agregar ademas que el
programa determine cuantos de los estudiantes están aprobados y cuantos reprobados.*/

#include <stdio.h>
int main()
{ float notas, promedio=0;
int i, alumnos,aprobados=0,desaprobados=0;
printf("ingrese la cantidad de alumnos:");
scanf("%d",&alumnos);
for(i=0;i<alumnos;i++){
printf("ingrese nota %d:",i + 1);
scanf("%f",&notas);
if(notas<7)
desaprobados++;
else
aprobados++;
promedio=promedio + notas;
}
promedio = promedio/alumnos;
printf("el promedio es %.2f\n",promedio);
printf("aprobados: %d y desaprobados: %d",aprobados,desaprobados);
return 0;
}