/*C) Escribir una programa para Arduino que encienda en forma de barrido de derecha a izquierda, 8
led’s conectados a sus puertos. El tiempo total en el que se debe barrer los 8 led’s es de 500ms.*/

int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int Dp = 9;

void setup() {
  pinMode (A, OUTPUT);
  pinMode (B, OUTPUT);
  pinMode (C, OUTPUT);
  pinMode (D, OUTPUT);
  pinMode (E, OUTPUT);
  pinMode (G, OUTPUT);
  pinMode (F, OUTPUT);
  pinMode (Dp, OUTPUT);
}

void loop() {
 digitalWrite(A, HIGH);
 delay(300);
 digitalWrite(A, LOW);
 delay(300);
 digitalWrite(B, HIGH);
 delay(300);
 digitalWrite(B, LOW);
 delay(300);
 digitalWrite(C, HIGH);
 delay(300);
 digitalWrite(C, LOW);
 delay(300);
 digitalWrite(D, HIGH);
 delay(300);
 digitalWrite(D, LOW);
 delay(300);
 digitalWrite(E, HIGH);
 delay(300);
 digitalWrite(E, LOW);
 delay(300);
 digitalWrite(F, HIGH);
 delay(300);
 digitalWrite(F, LOW);
 delay(300);
 digitalWrite(G, HIGH);
 delay(300);
 digitalWrite(G, LOW);
 delay(300);
 digitalWrite(Dp, HIGH);
 delay(300);
 digitalWrite(Dp, LOW);
 delay(600);

 digitalWrite(A, HIGH);
 digitalWrite(B, HIGH);
 digitalWrite(C, HIGH);
 digitalWrite(D, HIGH);
 digitalWrite(E, HIGH);
 digitalWrite(F, HIGH);
 digitalWrite(G, HIGH);
 delay(600);
 digitalWrite(A, LOW);
 digitalWrite(B, LOW);
 digitalWrite(C, LOW);
 digitalWrite(D, LOW);
 digitalWrite(E, LOW);
 digitalWrite(F, LOW);
 digitalWrite(G, LOW);
 delay(600);
}