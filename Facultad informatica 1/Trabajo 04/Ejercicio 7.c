/*7) Crea un programa donde se solicite al usuario que introduzca el tipo de bomba para una máquina,
pudiendo introducir valores enteros comprendidos entre 0 y 4. Según el valor introducido por el
usuario debe mostrarse el siguiente resultado usando un condicional switch:
a) Si el tipo de bomba es 0, mostrar un mensaje por consola indicando “No hay establecido un valor
definido para el tipo de bomba”.
b) Si el tipo de bomba es 1, mostrar un mensaje por consola indicando “La bomba es una bomba de
agua”.
c) Si el tipo de bomba es 2, mostrar un mensaje por consola indicando “La bomba es una bomba de
gasolina”.
d) Si el tipo de bomba es 3, mostrar un mensaje por consola indicando “La bomba es una bomba de
hormigón”.
e) Si el tipo de bomba es 4, mostrar un mensaje por consola indicando “La bomba es una bomba de
pasta alimenticia”.
f) Si no se cumple ninguno de los valores anteriores mostrar el mensaje “No existe un valor válido
para tipo de bomba”.*/

#include <stdio.h>

int main(){
	
	int num;
	
	printf("Escoja un tipo de bomba con un numero entre el 0 y el 4: ");
	scanf("%d", &num);
	
	switch(num){
		case 0: 
			printf("No hay establecido un valor.");
			break;
		case 1:
			printf("La bomba es una bomba de agua.");
			break;
		case 2:
			printf("La bomba es una bomba de gasolina.");
			break;
		case 3:
			printf("La bomba es una bomba de hormigon.");
			break;
		case 4:
			printf("La bomba es una bomba alimenticia.");
			break;
		default:
			printf("No existe un valor valido para tipo de bomba.");				
	}	
	
    return 0;
} 