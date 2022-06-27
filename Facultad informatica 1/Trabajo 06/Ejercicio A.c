/*A) Dado el siguiente código de ejemplo:
#include <stdio.h>
int main(){
int num1[10];
int num2[5] = {1, 5, 9, 13, 24};
char txt1[] = “Hola mundo”;
char txt2[10];
}
Agregar las instrucciones que considere necesarias para que:
1) Se impriman en pantalla las posiciones 2 y 4 del arreglo num2.
2) Se ingresen por teclado los valores del arreglo num1.
3) Se muestren en pantalla los caracteres de txt1.
4) Se ingrese por teclado una cadena de caracteres, se guarden en txt2 y se muestren en pantalla
en mayúsculas.*/

#include <stdio.h>
#include <string.h>
int main()
{
int i;
int num1[10];
int num2[5]= {1,5,8,13,24};
char txt[]= "Hola mundo";
char txt2[10];
printf("posicion 2:%i\t posicion 4:%i\n",num2[2],num2[4]);
for(i=0;i<10;i++){
printf("ingrese el valor de num1 %i°: ",i+1);
scanf("%d",&num1[i]);
}
printf("los valores son:\n");
for(i=0;i<10;i++){
printf("%i-",num1[i]);
}
printf("txt: %s\n",txt);
printf("escribe algo:");
scanf("%s",txt2);
printf("texto: %s",txt2);
return 0;
}