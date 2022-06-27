/*J) Escribir un programa que despliegue en pantalla la siguiente tabla, utilizando bucles:
Equivalencias entre los distintos sistemas de numeracion:
Decimal Binario Hexadecimal
0 0 0
1 1 1
2 10 2
3 11 3
4 100 4
5 101 5
6 110 6
7 111 7
8 1000 8
9 1001 9
10 1010 A
11 1011 B
12 1100 C
13 1101 D
14 1110 E
15 1111 F*/

#include <stdio.h>
#include <math.h>

int bin(int dec);
int main()

{

int i;
printf("decimal\t binario hexadecimal\n");
for(i=0;i<=15;i++){
printf("%d\t %d\t %x\n",i,bin(i),i );
}
return 0;
} 

int bin(int dec){
int resultado=0, j=0;
while(dec>0){
if((dec&1)==1){
(resultado+=1*pow(10,j));
j++;
}
dec>>=1;
} 
        return resultado;

 }