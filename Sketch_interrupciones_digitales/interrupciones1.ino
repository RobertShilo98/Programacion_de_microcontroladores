/*
Autor: Roberto Rico Sandoval.
Fille: Interrupción física.
Date: 02/ 01/ 2023
*/

int ledVerde = 2;
int ledAmarillo = 3;
int ledAzul = 4;
int pulsador = 5;

void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(pulsador, INPUT);
  
  attachInterrupt(pulsador, inter, RISING);
}

void loop()
{
  digitalWrite(ledVerde, HIGH);
  delay(500);
  digitalWrite(ledVerde, LOW);
  
  digitalWrite(ledAmarillo, HIGH);
  delay(500);
  digitalWrite(ledAmarillo, LOW);
  
  digitalWrite(ledAzul, HIGH);
  delay(500);
  digitalWrite(ledAzul, LOW);
}

void inter(){

  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarillo, HIGH);
  digitalWrite(ledAzul, HIGH);
  delay(2000);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledAzul, LOW); 
}

