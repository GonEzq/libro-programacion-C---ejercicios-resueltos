/*3) Escribir un programa en C que lea un par de coordenadas del plano xy, y determine si el punto leído
es interno, perimétrico o exterior al rectángulo cuyos vértices son: (2,1) - (4,1) - (2,5) - (4,5).*/

#include<stdio.h>
int main(){
	float x,y;
	printf("introducir la cordenada en x:");
	scanf("%f",&x);
	printf("introducir la cordenada en y:");
	scanf("%f",&y);
	if((x>2)&&(x<4)&&(y>1)&&(y<5)){
    	printf("Es un punto dentro del perimetro");
	}
	else if(((x==2)||(x==4)&&(y==1)||(y==5))){
    	printf("Es un punto sobre el perimetro");
	}
	else{
    	printf("Es un punto fuera del perimetro");
	}
}
