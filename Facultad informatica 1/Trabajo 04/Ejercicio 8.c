/*8) Escribir un programa que introduzca una calificación (A-F) y emita el mensaje correspondiente de
acuerdo a la nota ingresada:
A- Excelente
B- Buena
C- Regular
D- Suficiente
F- No Suficiente
Nota: Utilizar la estructura condicional Switch.
2*/

#include <stdio.h>

int main()
{
    char cal;
    printf("Ingrese la calificacion: ");
    scanf("%c",&cal);
    
    switch(cal){
        case 'A':
        case 'a':printf("Exelente:");break;
        case 'B':
        case 'b':printf("Buena:");break;
        case 'C':
        case 'c':printf("Regular:");break;
        case 'D':
        case 'd':printf("Suficiente:");break;
        case 'F':
        case 'f':printf("No Suficiente:");break;
        
        default:printf("Calificacion no valida:");
        
    }

    return 0;
}