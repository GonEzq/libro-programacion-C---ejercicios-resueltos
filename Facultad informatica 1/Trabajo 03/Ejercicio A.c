/*A) Realizar un programa que permita convertir un numero ingresado por teclado, entre los distintos
sistemas de numeración:
1) Decimal a Hexadecimal.
2) Hexadecimal a Decimal.
3) Binario a Decimal y Hexadecimal.*/
/* agrege yo el octal*/

#include <stdio.h>
#include <math.h>

int main ()
{
    int a=0;
    int bin [100], i,j;
    int opcion=0;
        printf ("Ingrese un numero: ");
        scanf ("%d",&a);

        printf("1. Decimal\n2.Hexadecimal\n3.Octal\n4.Binario\n");
        scanf("%d",&opcion);

        switch (opcion)
            {
            case 1 :
                    printf (" El numero es: %d ",a);
                    break;
            case 2 :
                    printf (" El numero es: %x ",a);
                    break;        
            case 3 :
                    printf (" El numero es: %o ",a);
                    break;

            case 4 :

                     while (a>0){
                        bin[i]= a%2;
                        a /= 2;
                        ++i;
                    }
                    for (j=i -1; j>=0; --j)
                    printf (" %d ", bin[j]);
                    printf ("\n");
            }
            return 0;

}