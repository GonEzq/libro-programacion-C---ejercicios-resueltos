/*5) Escribir un programa en C que lea 3 valores enteros y los imprima de menor a mayor.*/

#include<stdio.h>
int main(){
	int num1,num2,num3,aux;
	printf("ingrese un numero: ");
	scanf("%d",&num1);
	printf("ingrese un numero: ");
	scanf("%d",&num2);
	printf("ingrese un numero: ");
	scanf("%d",&num3);
	if(num1>num2){
    	aux=num2;
    	num2=num1;
    	num1=aux;
	}
	if(num2>num3){
    	aux=num2;
    	num2=num3;
    	num3=aux;
	}
   	 
	if(num1>num2){
    	aux=num1;
    	num1=num2;
    	num2=aux;
	}
	printf("el orden queda: %d,%d,%d",num1,num2,num3);
	return 0;
}
