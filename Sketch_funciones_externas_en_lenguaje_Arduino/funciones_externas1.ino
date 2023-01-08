/*
Autor: Roberto Rico Sandoval.
Fille: Funciones en Arduino.
Date: 02/ 01/ 2023
*/

int ledVerde = 2;
int ledAzul = 3;
int ledAmarillo = 4;

int ite;

void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
}

void loop(){

  funcionExterna(ledVerde);
  funcionExterna(ledAzul);
  funcionExterna(ledAmarillo);
}

void funcionExterna(int led)
{
  for(int ite = 0; ite < 3; ite++){
  
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    
  }
}

