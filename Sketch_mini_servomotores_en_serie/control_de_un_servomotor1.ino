/*
Autor: Roberto Rico Sandoval.
Fille: Microservomotor en Arduino.
Date: 27/ 12/ 2022
*/

#include <Servo.h>

// Creación de objeto servomotor.
Servo servomomi1;
Servo servomomi2;
Servo servomomi3;

// Angulo de giro de motores.
int angulo = 0;

void setup()
{
  
  // Señales digitales de servomotores.
  servomomi1.attach(3);
  servomomi2.attach(5);
  servomomi3.attach(6);
}

void loop()
{
  
  for(angulo = 0; angulo <= 180; angulo++){
  
    // Hacer que el motor se mueva a 90 grados.
    servomomi1.write(angulo);
    servomomi2.write(angulo);
    servomomi3.write(angulo);
    delay(70);
  }
  
  for(angulo = 180; angulo <= 0; angulo--){
  
    // Hacer que el motor regrece a 0 grados.
    servomomi1.write(angulo);
    servomomi2.write(angulo);
    servomomi3.write(angulo);
    delay(100);
  }
}

