/*
Autor: Roberto Rico Sandoval.
Fille: Comunicación entre dispositivo maestro y esclavo.
Date: 18/12/2022
*/

#include <Wire.h>

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  // Unir los buses de comunicación de arduino en dirección 1.
  Wire.begin(1);

  // Registro del evento al recibir datos.
  Wire.onReceive(receiveEvent);

  // Iniciar monitor serial.
  Serial.begin(9600);
}

void loop()
{
  delay(1000);
}

// Creación de función en Arduino.
void receiveEvent(int cuando){

  int pinOut = 0;
  int estado = 0;
  
  // Sí hay 2 bytes disponibles.
  if(Wire.available() == 2){
  
    pinOut = Wire.read();
    Serial.print("\nLED ");
    Serial.println(pinOut);
  }
  // Sí hay 1 byte disponible.
  if(Wire.available() == 1){
  
    estado = Wire.read();
    Serial.print("\nEstado ");
    Serial.println(estado);
  }
  
  // Desactivar o activar salida.
  digitalWrite(pinOut, estado);
}