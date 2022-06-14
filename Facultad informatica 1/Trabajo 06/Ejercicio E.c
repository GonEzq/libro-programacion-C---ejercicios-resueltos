/*E) Escribir un programa en C que simule el lanzar un dado de seis lados 1000 veces y determine
cuentas veces el dado cayó en cada uno de sus lados. Para generar números aleatorios en C utilice:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int ladoDado;
srand(time(NULL));
ladoDado = 1 + (rand() % 6);
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int lados[6]={0,0,0,0,0,0};
    int dado[1000];
    int i;
    
    srand(time(NULL));
    for (i=0; i<1000; i++){
        
        dado[i]=(rand()%6)+1;
       // printf("%d \n", dado[i]);
     
    }

    for(i=0; i<1000;i++){
        lados[dado[i]-1]+=1;
    }
    for(i=0;i<6;i++){
        printf("%d \n",lados[i]);
        
    }
    
    return 0;
}