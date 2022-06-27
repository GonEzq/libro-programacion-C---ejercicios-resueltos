/*D) Modificar la función delay1s() para que pueda modificarse el tiempo de espera.*/

#include <stdio.h>
#include <time.h>

void delay1s (int);

int main()
{
int seg, i, espera;
printf("ingrese el valor del tiempo:\n");
scanf("%d", &seg);
printf("ingrese el tiempo de espera en seg: ");
scanf("%d",&espera);
for(i=seg; i>=0; i--){
printf("el tiempo restante es: %d\n", i);
delay1s (espera);
}
return 0;
}

void delay1s(int espera){
long int tiempo = clock();
while(((clock() - tiempo) / CLOCKS_PER_SEC) < espera);
}