/*1) Escribir un programa en C que calcule el promedio de 4 valores enteros ingresados por teclado y
agregar un condicional if para imprimir “Valor mayor que 10” si el promedio es mayor a 10. Nota:
el programa deberá hacer uso únicamente de dos variables enteras (int).*/

#include <stdio.h>

int main()
{
	int num[4], suma=0;
	    printf("Ingrese la nota : ");
	    scanf("%d", &num[0]);
	    printf("Ingrese la nota : ");
	    scanf("%d", &num[1]);
	    printf("Ingrese la nota : ");
	    scanf("%d", &num[2]);
	    printf("Ingrese la nota : ");
	    scanf("%d", &num[3]);
	    
	    suma = suma + num[0] + num[1] + num[2] + num[3];
	
 	    suma= suma / 4;
 	    
 	    if (suma>=10){
 	     printf("\n El promedio: %d es mayor que 10.", suma);   
 	    }
 	    else{
 	        printf("\n El promedio: %d es menor que 10.", suma);
 	    }
 	
return 0;		
}