/*B) Escribir un código en C que calcule la nota promedio de un curso de 25 personas.*/



#include <stdio.h>
int main()
{ float notas, promedio=0;
int i;
for(i=0;i<25;i++){
printf("ingrese nota %d:",i + 1);
scanf("%f",&notas);
promedio=promedio + notas;
}
promedio = promedio/25;
printf("el promedio es %.2f",promedio);
return 0;
}