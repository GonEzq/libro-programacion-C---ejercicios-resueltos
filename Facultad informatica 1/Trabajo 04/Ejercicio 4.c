/*4) Calculadora simple: Escribir un programa en C que ingresando expresiones aritméticas (+,-,* y /)
entre dos reales muestre el resultado de la misma en pantalla. Realizar dos versiones del programa:
una con estructuras if − else y otra con switch.*/

#include <stdio.h>

int main(){
    int a, b, c;
    int num;
    
	printf("Ingrese el numero 1: ");
	scanf("%d", &a);
	printf("Ingrese el numero 2: ");
	scanf("%d", &b);
	printf("Ingrese una operacion entre: 1) Suma, 2) Resta, 3) Multiplicacion, 4) Division: ");
	scanf("%d", &num);
	
	if (num==1){
		c= a+ b;
		printf ("La suma es: %d", c);
	}
	else if (num==2){
		c= a- b;
		printf ("La resta es: %d", c);
	}
    else if (num==3){
		c= a* b;
		printf ("La multiplicacion es: %d", c);
	}
	else if (num==4){
		c= a/ b;
		printf ("La division es: %d", c);
	}
	else {
		printf("El numero ingresado no es valido.");
	}
	
return 0;		
}