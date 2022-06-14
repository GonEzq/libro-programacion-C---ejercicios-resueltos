/*A) Realizar el código en C necesario para que se impriman en pantalla los primeros 20 valores de la
serie de Fibonacci. Recordar que:
f 0=0
f
1=1
f
n=f
n−1+f
n−2
*/

#include <stdio.h>

int main()
{
    int num, i, x=0, y=1 ,z=1;
    printf("Digite un numero: ");
    scanf("%i",&num);
    printf("1,");
    for(i=1;i<num;i++){
        z=x+y;
        x=y;
        y=z;
        printf("%i,",z);
        
    }

    return 0;
}