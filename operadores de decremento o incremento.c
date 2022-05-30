/*Operadores de incremento/decremento*/

int main ()
{
    int val, val1 = 3, val2 = 3;
    val = val1--; /*primero asigna y luego decrementa */
    printf (" val = %d, val1 = %d", val, val1);
    val = --val2; /* primero decrementa y luego asigna */
    printf (" val = %d, val2 = %d", val, val2);

    return 0;
}