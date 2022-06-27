/*C) Realizar un programa en C, que me muestre en pantalla una cuenta regresiva de un valor en
segundos ingresado por teclado. La demora de tiempo se deber realizar mediante una función
(puede llamarse por ejemplo delay1s()) que retrase el programa 1 segundo. Ver las funciones que
brinda la librería time.h para llevar esta tarea a cabo.*/

#include <stdio.h>
#include<time.h>
void delay1s(void);
int main()
{
int seg, i;
printf("ingrese el valor del tiempo:\n");
scanf("%d", &seg);
for(i=seg; i>=0; i--){
printf("el tiempo restante es: %d\n", i);
delay1s();
} return 0;
}
void delay1s(void){
long int tiempo = clock();
while(((clock() - tiempo) / CLOCKS_PER_SEC) < 1);
}