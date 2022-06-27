/*D) Escriba un programa que pida dos números enteros y devuelva en pantalla qué números son pares y
cuáles impares desde el primer numero que se ingreso hasta el segundo.*/

#include <stdio.h>
int main()
{ int num1,num2;
printf("ingrese un numero:");
scanf("%d",&num1);
printf("ingrese un numero mayor a %d:",num1);
scanf("%d",&num2);
if(num2<num1){
printf("error");
} for(num1;num1<=num2;num1++){
if(num1%2==0)
printf("el numero %d es par\n",num1);
else
printf("el numero %d es impar\n",num1);
} return 0;
}