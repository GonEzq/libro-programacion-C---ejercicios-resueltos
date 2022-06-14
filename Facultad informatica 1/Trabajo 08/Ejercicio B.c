/*B) Escribir un programa para Arduino que permita destellar 3 led’s con frecuencias de 500ms, 200ms y
100ms respectivamente.
*/



void setup() {
  long int tiempo=0, tiempo2=0,tiempo3=0;
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
}

void loop(){
  if((millis()-tiempo1)>500){
    tiempo1=millis();
    digitalWrite(12,digitalRead(12));
    }
  if((millis()-tiempo2)>200){
    tiempo1=millis();
    digitalWrite(11,digitalRead(11));
    }
    if((millis()-tiempo3)>100){
    tiempo1=millis();
    digitalWrite(10,digitalRead(10));
    }
}