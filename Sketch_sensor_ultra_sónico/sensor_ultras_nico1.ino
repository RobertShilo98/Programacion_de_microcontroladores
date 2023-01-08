/*
Autor: Roberto Rico Sandoval.
Fille: Sensor de proximidad.
Date: 28/ 12/ 2022
*/

const int EchoPin = 5;
const int TriggerPin = 6;

void setup()
{
  
  pinMode(EchoPin,OUTPUT);
  pinMode(TriggerPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  
  long  cm = ping(TriggerPin,EchoPin);
  delay(1000);
}

// Programar función.
int ping(int TriggerPin, int EchoPin){

  long duracion; 
  long distancia;
  
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(4);
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);
  
  duracion = pulseIn(EchoPin,HIGH);
  distancia = duracion*10/292/2;
  
  return distancia;
}

