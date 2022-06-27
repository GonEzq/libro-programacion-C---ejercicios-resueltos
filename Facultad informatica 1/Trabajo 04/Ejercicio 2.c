/*2) Escribir un programa en C que calcule y muestre en pantalla la cantidad de números pares e impares
resultante de ingresar 4 valores enteros por teclado. Nota: el programa deberá implementar un
contador de números pares e impares. Utilizar condicional if - else para contar pares e impares.*/


#include <stdio.h>
int pares=0,impares=0;
int main()
{
	int a,b;
	printf("inserte un numero:\n");
	scanf("%d",&a);
	if(b=a%2){
    	impares=impares+1;
	}
	else {
    	pares=pares+1;
	}
	printf("inserte un numero:\n");
	scanf("%d",&a);
	if(b=a%2){
    	impares=impares+1;
	}
	else {
    	pares=pares+1;
	}
	printf("inserte un numero:\n");
	scanf("%d",&a);
	if(b=a%2){
    	impares=impares+1;
	}
	else {
    	pares=pares+1;
	}
	printf("inserte un numero:\n");
	scanf("%d",&a);
	if(b=a%2){
    	impares=impares+1;
	}
	else {
    	pares=pares+1;
	}
	printf("numeros pares: %d\n",pares);
	printf("numeros impares: %d",impares);
	return 0;
}
