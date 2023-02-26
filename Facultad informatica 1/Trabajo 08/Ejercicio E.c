/*E) Controlar un display de 7 segmentos mediante Arduino para que el mismo muestre una cuenta
descendente del 9 al 0 (que corresponderán a segundos) luego de presionado un pulsador. El valor
mostrado en el display también deberá ser enviado a la PC mediante la comunicación serie.*/


int contador = 0;  
int presionado1; 
int presionado2; 

int pulsador_disminuir = 9; 
int pulsador_aumentar = 10; 

void encender(int a, int b, int c, int d, int e, int f, int g)
{
  //Funcion que permite mostrar los numeros del 0 al 9
  //Asigna un segmento del display a cada pin

  digitalWrite(2, a);  //Asigna el segmento 'a' al pin 2
  digitalWrite(3, b);  //Asigna el segmento 'b' al pin 3
  digitalWrite(4, c);  //Asigna el segmento 'c' al pin 4
  digitalWrite(5, d);  //Asigna el segmento 'd' al pin 5
  digitalWrite(6, e);  //Asigna el segmento 'e' al pin 6
  digitalWrite(7, f);  //Asigna el segmento 'f' al pin 7
  digitalWrite(8, g);  //Asigna el segmento 'g' al pin 8
}

void setup() {

  //Inicializa los pines como entradas/salidas digitales

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);  //Pulsador aumentar como entrada digital
  pinMode(10, INPUT);  //Pulsador disminuir como entrada digital
}

void loop() {

  //Condicionales para antirrebote y uso del pulsador aumentar

  if (digitalRead(pulsador_aumentar) == LOW)
  {
    presionado1 = 1;   //Variable del antirrebote que cambia cuando se presiona el pulsador
  }
  if (digitalRead(pulsador_aumentar) == HIGH && presionado1 == 1)
  {
    presionado1 = 0;  //Se reinicia la variable antirrebote
    contador++;       //Aumenta el contador
    if (contador > 9)
    {
      contador = 9; //Si el contador esta en 9 y se aumenta, sigue mostrando el 9
    }
  }

  //Condicionales para antirrebote y uso del pulsador disminuir

  if (digitalRead(pulsador_disminuir) == LOW)
  {
    presionado2 = 1;    //Variable del antirrebote que cambia cuando se presiona el pulsador
  }
  if (digitalRead(pulsador_disminuir) == HIGH && presionado2 == 1)
  {
    presionado2 = 0;   //Se reinicia la variable antirrebote
    contador--;        //Disminuye el contador

    if (contador < 0) //Si el contador esta en 0 y se disminuye, sigue mostrando el 0
    {
      contador = 0;
    }
  }

  switch (contador)
  {
    //Dependiendo del contador, se muestra el numero indicado
    //Envia estados (1 y 0) al display dependiendo del numero a mostrar

    case 0:
      encender (1, 1, 1, 1, 1, 1, 0); //Muestra el numero 0
      break;

    case 1:
      encender (0, 1, 1, 0, 0, 0, 0); //Muestra el numero 1
      break;

    case 2:
      encender (1, 1, 0, 1, 1, 0, 1); //Muestra el numero 2
      break;

    case 3:
      encender (1, 1, 1, 1, 0, 0, 1); //Muestra el numero 3
      break;

    case 4:
      encender (0, 1, 1, 0, 0, 1, 1); //Muestra el numero 4
      break;

    case 5:
      encender (1, 0, 1, 1, 0, 1, 1); //Muestra el numero 5
      break;

    case 6:
      encender (1, 0, 1, 1, 1, 1, 1); //Muestra el numero 6
      break;

    case 7:
      encender (1, 1, 1, 0, 0, 0, 0); //Muestra el numero 7
      break;

    case 8:
      encender (1, 1, 1, 1, 1, 1, 1); //Muestra el numero 8
      break;

    case 9:
      encender (1, 1, 1, 0, 0, 1, 1); //Muestra el numero 9
      break;
  }
}