/*
Autor: Roberto Rico Sandoval.
Fille: Sensor de temperatura.
Date: 03/ 01/ 2023
*/

int sensor = A5;

int temperatura = 0;
int voltaje = 0;

void setup()
{
  Serial.begin(9600);
  analogRead(10);
}

void loop()
{
  voltaje = analogRead(sensor) * 3.3 / 1023;
  temperatura = voltaje * 100;
  Serial.println(temperatura);
  delay(500);
}

