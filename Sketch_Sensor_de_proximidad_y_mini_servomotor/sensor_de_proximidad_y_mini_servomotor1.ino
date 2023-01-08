/*
Autor: Roberto Rico Sandoval.
Fille: Sensor de proximidad y miniservomotor.
Date: 01/ 01/ 2023
*/

#include <Servo.h>
Servo entrada;

int disparador = 2;
int eco = 3;
int ledRojo = 5;
int ledVerde = 6;

int distancia;
int tiempo;

void setup()
{
  
  Serial.begin(9600);
  pinMode(disparador, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(eco, INPUT);
  entrada.attach(4);
}

void loop()
{
  
  digitalWrite(disparador, HIGH);
  delay(1);
  digitalWrite(disparador, LOW);
  tiempo = pulseIn(eco, HIGH);
  distancia = tiempo/58.2;
  Serial.println(distancia);
  delay(500);
  
  if(distancia <= 50){
  
    entrada.write(180);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledRojo, LOW);
  }
  
  else{
  
    entrada.write(0);
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
  }
}

