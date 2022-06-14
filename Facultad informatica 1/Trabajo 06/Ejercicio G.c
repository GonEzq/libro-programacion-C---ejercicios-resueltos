/*G) Realizar un programa que ordene de mayor a menor un arreglo de 20 elementos generados
aleatoriamente. El programa debe mostrar el antes de seer ordenado y el resultado de dicho
ordenamiento. Buscar la forma de que el código para realizar esta tarea sea lo mas óptimo posible.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arreglo[20];
    int a[20];
    int i,j;
    printf("De Mayor a menor.\n");
    printf("\n");
    srand(time(NULL));
    printf("El Arreglo origial.\n");
    for(i=0;i<20;i++){
        arreglo[i]=rand()%1000;
        a[i]=0;
        printf("%d\n",arreglo[i]);
    }
    printf("\n");
    printf("El arreglo ordenado.\n");
    for(i=0;i<20;i++){
        for(j=i+1;j<20;j++){
            if(arreglo[i]<arreglo[j]){
                a[i]=arreglo[i];
                arreglo[i]=arreglo[j];
                arreglo[j]=a[i];
            }
        }
    printf("%d\n",arreglo[i]);
    }

    return 0;
}

