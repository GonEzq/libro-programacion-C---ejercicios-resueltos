/*E) Escribir un programa que calcule las ganancias de un plazo fijo. El programa pedirá al usuario que
ingrese la cantidad de dinero a invertir, el interés mensual y el número de meses que desea realizar
la inversión, y muestre por pantalla el capital obtenido cada mes que dura la inversión.*/



#include <stdio.h>
int main()
{ 
    float interes, dinero, ganancia;
    int meses, i;
printf("ingrese el dinero a invertir, los meses e interes mensual\n");
scanf("%f,%d,%f", &dinero, &meses, &interes);
    for(i=0; i<meses;i++){
        ganancia=interes * dinero / 100;
        dinero+=ganancia;
    printf("el dinero a %d meses es igual %.2f\n", (i + 1), dinero);

}
    return 0;
 }