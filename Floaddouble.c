/*
    Un float tiene menos precisión que un double, 6 frente (float) a 15 decimales (double) 
    posibles respectivamente y, por lo tanto, ocupa menos memoria (4 frente a 8 bytes). 
    Se debe tener en cuenta que el sistema está redondeando los valores que almacena 
    en cualquiera de los dos. Esto puede causar resultados inesperados, especialmente con
    un float ya que tienen menos precisión. Es por eso que double se usa cada vez que 
    la precisión sea importante, como en aplicaciones científicas, médicas o financieras.
*/

#include <stdio.h>

int main() {
  
  // cuanto mayor es el número de repetición, se aprecia mejor la falta de precisión de float
  int numOfLoops = 1150; 

  float a = 0.1f;
  float b = 0;
  double x = 0.1;
  double y = 0;

  printf("At the start, our target float b is:%f\n", b);
  printf("At the start, our target double y is:%f\n", y);

  for(int i = 0; i < numOfLoops; i++)
  {
    b += a;
    y += x;
  }

  printf("At the end, our target float b is:%f\n", b);
  printf("At the end, our target double y is:%f\n", y);

}