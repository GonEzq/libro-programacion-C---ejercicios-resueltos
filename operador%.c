#include <stdio.h>

int main() {
	
	/*
	El operador "%" nos permite mostrar el valor del dato
	definido.
	
	La funcion sizeof(), devuelve el tamanio del tipo de
	dato en bytes.
	*/

	// esto es un comentario en un linea
	printf("char: %ld\n", sizeof(char));
	
	printf("int: %ld\n", sizeof(int));
	
	printf("short int: %ld\n", sizeof(short int));
	printf("long int: %ld\n", sizeof(long int));
	
	// El signo no varia el tamanio total, si la distribucion
	printf("unsigned short int: %ld\n", sizeof(unsigned short int));
	printf("unsigned long int: %ld\n", sizeof(unsigned long int));
	
	printf("float: %ld\n", sizeof(float));
	
	printf("double: %ld\n", sizeof(double));
		
	
	return 0;
}