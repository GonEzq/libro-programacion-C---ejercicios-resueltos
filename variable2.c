#include <stdio.h>

// variable declara e inicializada
/*int main() {
	
	// mi_variable es el "identificador" de la variable
		
	int mi_variable; // declaracion de la variable
	
	mi_variable = 42; // inicializacion de la variable
	
	printf("Mi variable tiene el valor de: %d", mi_variable);
	
	return 0;
}*/

// variable declara e inicializada en la misma linea
/*int main() {
	
	int mi_variable = 42; // declaracion e inicializacion 
	
	printf("Mi variable tiene el valor de: %d", mi_variable);
	
	return 0;
}*/

// Ejemplo
int main() {
	
	// Se pueden definir variable de distintos tipos
	int a, b;
	float salario = 213.416;
	char letra = 'M';
	
	a = 13;
	b = 25;
	
	int c = a + b;
	
	printf("%d\n", c);
	printf("%.2f\n", salario);
	printf("%c\n", letra);
	
	return 0;
}