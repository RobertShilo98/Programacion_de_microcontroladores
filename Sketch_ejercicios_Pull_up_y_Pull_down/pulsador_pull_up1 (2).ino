/*
Autor: Roberto Rico Sandoval.
Fille: Pulsador con resistencias.
Date: 19/12/2022
*/

int led = 9;
int pulsador = 4;
int valor = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
}

void loop()
{
  
  while(digitalRead(pulsador) == HIGH){
  
    Serial.print("\nBoton sin precionar. LED sin prender.");
    delay(0.1);
  }
  
  valor = digitalRead(led);
  digitalWrite(led, !valor);
  
  while(digitalRead(pulsador) == LOW){
  
    Serial.print("\nBoton precionado. LED prendido.");
    delay(0.1);
  }
}

