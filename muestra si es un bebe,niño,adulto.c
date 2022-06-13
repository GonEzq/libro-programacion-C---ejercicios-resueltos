#include <stdio.h>

int main ()
{
    int a,b=3,c=13,d;

    printf (" ingrese la edad: ");
    scanf ("%d", &a);

    if ( a < b)

        printf (" es un bebe");

    
    else
        
        if (a < c && a > b)

            printf ("es un niño");
        
     else 
           
        
            printf (" es un adulto");
        
    
    return 0;

}