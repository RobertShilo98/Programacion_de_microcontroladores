/*
Autor: Roberto Rico Sandoval.
Fille: Práctica 2 señales digitales.
Date: 15/ 12/ 2022
*/

int lectura = 0;

void setup()
{
  pinMode(6, INPUT); //Selección del pin digital 6 con acción de pulsado de botón.
  Serial.begin(9600); // Comunicación de la PC con el arduino.
}


void loop()
{
  lectura = digitalRead(6); // Lectura de información del pin 6.
  delay(1000);
  Serial.println(lectura); // Imprimir información en el monitor serial del IDE.
}

