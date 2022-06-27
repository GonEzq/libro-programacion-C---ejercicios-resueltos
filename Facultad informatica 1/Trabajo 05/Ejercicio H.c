/*H) Escribir un programa que permita calcular el factorial de un valor ingresado por teclado. Recuerde
que el factorial de un número es igual a:
n!=n⋅(n−1)⋅(n−2)⋅…⋅1*/

#include <stdio.h>
int main()
{ int i,num,factorial=1;
printf("ingrese un numero: ");
scanf("%d",&num);
for(i=1;i<=num;i++){
factorial=factorial*i;
}
printf("el factorial de %d es %d",num,factorial);
return 0;
}