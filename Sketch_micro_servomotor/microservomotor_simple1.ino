/*
Autor: Roberto Rico Sandoval.
Fille: Microservomotor sencillo.
Date: 27/ 12/ 2022
*/

#include <Servo.h>

Servo ejmplo1;

int giro;

void setup()
{
  ejmplo1.attach(7);
  Serial.begin(9600);
}

void loop()
{
  
  while(Serial.available() == 0){
  
    giro = Serial.parseInt();
    ejmplo1.write(giro);
    
  }
}

