/*G) Realizar un programa que permita determinar la temperatura máxima, mínima y promedio en un
campo. La cantidad de valores de temperaturas que se ingresaran por teclado es variable, el
programa terminará cuando se ingrese el valor -100.*/

#include <stdio.h>

int main()
{
    float temp,total=0,prom;
    int tempcant=0;
    int max=0,min;
    do{
        printf("Ingrese el valor de la temperatura: ");
        scanf("%f",&temp);
        if(temp!=-100){
            total=temp+total;
            tempcant+=1;
            prom=total/tempcant;
        }
        if(temp<min&&temp!=-100){
        min=temp;
        }
        if(temp>max){
            max=temp;
        }
    }while(temp!=-100);
    
    printf("La temperatura promedio es: %.2f\n",prom);
    printf("La temperatura Maxima es:%d\n",max);
    printf("La temperatura Minima es:%d",min);

    return 0;
}