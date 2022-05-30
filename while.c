/*while*/
#include <stdio.h>

int main ()

{
    int fahr, celsius;
    int bajo, alto, paso;

    bajo=0;
    alto=300;
    paso=20;
    fahr=bajo;

    while (fahr <= alto) {
        celsius = 5 * (fahr - 32) / 9;    /* (5/9) (f-32) */
        printf (" %d\t%d\n", fahr, celsius);
        fahr = fahr + paso;

    }
}
