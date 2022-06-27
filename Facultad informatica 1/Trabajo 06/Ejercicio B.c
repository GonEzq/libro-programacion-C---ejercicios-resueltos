/*B) Escribir un programa en C que cree un arreglo de 10 elementos y los inicialice con los siguientes
valores: 37, 60, 70, 90, 14, 95, 18, 64, 27, 32. El programa deberá presentar en pantalla los valores
de la siguiente forma:
Elemento Valor
0 37
1 60
2 70
3 90
4 14
5 95
6 18
7 64
8 27
9 32*/

#include <stdio.h>


   
int main ()
{
    int grupo [10];
    int i;

    grupo[0] = 37;
	grupo[1] = 60;
	grupo[2] = 70;
    grupo[3] = 90;
    grupo[4] = 14;
    grupo[5] = 95;
    grupo[6] = 18;
    grupo[7] = 64;
    grupo[8] = 27;
    grupo[9] = 32;
 
	for (i=0; i<10; i++){

    printf (" %d - %d\n ", i, grupo [i]);
    }
    return 0;
}

