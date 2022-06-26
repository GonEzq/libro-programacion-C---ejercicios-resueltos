/*F) Hacer un programa que me permita obtener las raíces de una función de segundo grado del tipo:
y=a⋅x2+b⋅x+c
Recuerde que las raíces se pueden obtener utilizando:
x1 , x2=
(−b±√b2−4⋅a⋅c)
2⋅a*/

#include<stdio.h>
#include<math.h>
 
int main(){
  float a,b,c;
  float d,r1,r2;  
 
 
  printf("Ingrese los valores A, B y C: ");
  scanf("%f%f%f",&a,&b,&c);
   
  d = b * b - 4 * a * c;
  
  if(d < 0){
    printf("Las raices son numeros complejos.\n");
 
    printf("Las raices son: ");
    printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
    printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));
  
    return 0; 
  }
  else if(d==0){
   printf("Ambas raices son iguales.\n");
 
   r1 = -b /(2* a);
   printf("Las Raices son: %.3f ",r1);
 
   return 0;
  }
  else{
   printf("Las raices son numeros reales.\n");
  
   r1 = ( -b + sqrt(d)) / (2* a);
   r2 = ( -b - sqrt(d)) / (2* a);
   printf("Las raices son: %.3f , %.3f",r1,r2);
  }
 
  return 0;
}