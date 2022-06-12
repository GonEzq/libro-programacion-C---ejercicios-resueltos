/*
El código está listo para mostrar información básica sobre un estudiante imaginario. 
El problema es que el programador olvidó declarar los tipos de datos para cada variable 
en la parte superior del programa, por lo que fallará con errores.
Ingrese y agregue los tipos de datos apropiados a cada variable para que cuando ejecute 
la aplicación, el programa se complete y se muestre la información del estudiante.
*/

#include <stdio.h>

int main() {
  
 int studentRank;
 float studentFeeTotal;
 char studentGradeLetter;
  
 studentRank = 1;
 studentFeeTotal = 100.56;
 studentGradeLetter = 'A';

 printf("Student's Rank in class: %dst\n", studentRank);
 printf("Student's Total Fees: $%.2f\n", studentFeeTotal);
 printf("Student's Grade: %c\n", studentGradeLetter);
}