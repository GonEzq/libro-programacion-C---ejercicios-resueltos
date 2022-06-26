/*H) Modificar el programa anterior para que utilice el código de colores de los resistores del tipo agujeros
pasantes (tecnología Through-hole). Se deberá ingresar por teclado el valor del resistor y el
programa devolverá el código de colores del mismo.*/




#include <stdio.h>
#include <math.h>
int main()
{
int valor1, valor2, multi;
long int valorres;
printf("ingrese el valor del resistor en ohms:");
scanf("%ld", &valorres);
for(multi=1;valorres>=100;multi++){
valorres=valorres/10;
}
valor1=valorres/10;
valor2=(valorres-(10*valor1));
switch(valor1){
case 0: printf("1er banda color NEGRO\n");break;
case 1: printf("1er banda color MARRON\n");break;
case 2: printf("1er banda color ROJO\n");break;
case 3: printf("1er banda color NARANJA\n");break;
case 4: printf("1er banda color AMARILLO\n");break;
case 5: printf("1er banda color VERDE\n");break;
case 6: printf("1er banda color AZUL\n");break;
case 7: printf("1er banda color VIOLETA\n");break;
case 8: printf("1er banda color GRIS\n");break;
case 9: printf("1er banda color BLANCO\n");break;
default:printf("valor erroneo");break;
}
switch(valor2){
case 0: printf("2da banda color NEGRO\n");break;
case 1: printf("2da banda color MARRON\n");break;
case 2: printf("2da banda color ROJO\n");break;
case 3: printf("2da banda color NARANJA\n");break;
case 4: printf("2da banda color AMARILLO\n");break;
case 5: printf("2da banda color VERDE\n");break;
case 6: printf("2da banda color AZUL\n");break;
case 7: printf("2da banda color VIOLETA\n");break;
case 8: printf("2da banda color GRIS\n");break;
case 9: printf("2da banda color BLANCO\n");break;
default:printf("valor erroneo");break;
}
switch(multi){
case 1: printf("3er banda color NEGRO\n");break;
case 2: printf("3er banda color MARRON\n");break;
case 3: printf("3er banda color ROJO\n");break;
case 4: printf("3er banda color NARANJA\n");break;
case 5: printf("3er banda color AMARILLO\n");break;
case 6: printf("3er banda color VERDE\n");break;
case 7: printf("3er banda color AZUL\n");break;
case 8: printf("3er banda color VIOLETA\n");break;
case 9: printf("3er banda color GRIS\n");break;
case 10: printf("3er banda color BLANCO\n");break;
default:printf("valor erroneo");break;
}
return 0;
}
