/*A) Realizar un programa para Arduino que me permita simular el funcionamiento de las operaciones
lógicas. El circuito presentará:
1) 3 entradas que permitirán seleccionar entre las distintas operaciones (NOT, AND, OR, XOR,
NAND, NOR, XNOR).
2) 2 entradas que funcionaran como variables independientes de la operación lógica.
3) Una salida que me mostrará el resultado de dicha operación.*/

byte logica;
void setup() {
  for(byte i=2; i<=6;){
    pinMode(i,INPUT);
    }
    pinMode(13,OUTPUT);
}

void loop() {
  logica= digitalRead(4)+digitalRead(5)<<1+digitalRead(6)<<2;
  switch(logica){
    case 0;
     digitalWrite(13,(digitalRead(2)&digitalRead(3));
     break;
    case 1;
     digitalWrite(13,(digitalRead(2)|digitalRead(3));
     break;
    case 2;
     digitalWrite(13,!(digitalRead(2)^digitalRead(3));
     break;
     case 3;
     digitalWrite(13,(digitalRead(2)^digitalRead(3));;
     break;
    case 4;
      digitalWrite(13,!(digitalRead(2)&digitalRead(3));
     break;
     case 5;
      digitalWrite(13,!(digitalRead(2)|digitalRead(3));
     break;
    case 6;
      digitalWrite(13,!digitalRead(2));
     break;
    }
}