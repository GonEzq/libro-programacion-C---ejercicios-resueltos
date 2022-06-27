/*F) Un programa debe imprimir en pantalla las siguientes figuras, utilizando bucles y la menor cantidad
posible de funciones printf():
1)
* **
***
****
*****
******
*******
********
*********
**********
2)
*
**
***
****
*****
******
*******
********
*********
**********
3)
*
***
*****
*******
*********
*******
*****
***
**/

#include <stdio.h>
int main()
{
int i,b,c;
for(i=1;i<11;i++){
for(c=10;c>i;c++){
printf("");
} for(b=0;b<i;b++){
printf("%c",'*');
}
printf("\n");
} return 0;}