/* uso del operador %*/

#include <stdio.h>

    int main (void)
    {
        int i;
        for (i=1;i<= 20; i++) {

            printf (" El numero %d es ", i);
            if ((i % 2) == 0 ) printf ("par ");

                else printf (" impar ");

                if ((i % 3) == 0 ) printf ( " y es multiplo de 3 ");

                printf (" .\n");
        }
        return  0;
    }