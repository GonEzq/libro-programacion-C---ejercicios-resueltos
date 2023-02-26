/*C) Escribir una programa para Arduino que encienda en forma de barrido de derecha a izquierda, 8
led’s conectados a sus puertos. El tiempo total en el que se debe barrer los 8 led’s es de 500ms.*/

int pinArray [] = {1,2,3,4,5,6,7,8 };    // Vector donde se van a declarar los LEDs
int waitStart= 500;  // Tiempo entre encender un LED y otro
int tailLength = 0;     // Numero de LEDs activos
int lineSize = 8;       // Numero total de LEDs
 
void setup()
  {
    int i;
    for (i=0; i&lt; lineSize; i++)
    {
      pinMode(pinArray[i], OUTPUT);
    } 
  }
 
void loop()
   {
     int i;
     int tailCounter = tailLength; 
                                    
     for (i=0; i&lt;lineSize; i++)
     {
      digitalWrite(pinArray[i],HIGH); 
      delay(waitStart); // 
      if (tailCounter == 0)
      {
        digitalWrite(pinArray[i-tailLength],LOW);
      }
      else
         if (tailCounter &gt; 0)
            tailCounter--;
      }
      for (i=(lineSize-tailLength); i&lt;lineSize; i++)
      {
       digitalWrite(pinArray[i],LOW); 
       delay(waitStart); 
      }
 }
