/*
Autor: Roberto Rico Sandoval.
Fille: Potenciometro y microservomotor.
Date: 27/ 12/ 2022
*/

#include <Servo.h>

Servo iniciador;
int giro;

int ledRed = 3;
int ledGreen = 4;

void setup()
{
  Serial.begin(9600);
  iniciador.attach(2);
  pinMode(ledRed,OUTPUT);
  pinMode(ledGreen,OUTPUT);
}

void loop()
{
  giro = map(analogRead(A5),0,1023,0,180);
  // Se cambia el valor min y max del potenciometro de 0,1023 a 0,180
  
  Serial.println(giro);
  delay(500);
  iniciador.write(giro);
  
  if(giro <= 90){
  
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);
  }
  else{
  
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);
  }
}

