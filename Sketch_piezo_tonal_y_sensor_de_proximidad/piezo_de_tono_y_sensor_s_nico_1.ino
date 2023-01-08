/*
Autor: Roberto Rico Sandoval.
Fille: Sensor de proximdiad.
Date: 28/ 12/ 2022
*/

const int trigger = 2;
const int echo = 3;
const int ledRed = 4;
const int buzzer = 5;
const int ledGreen = 6;

float tiempo = 0;
float distancia = 0;

void setup()
{
  
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  digitalWrite(trigger, LOW);
  delayMicroseconds(4);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  
  tiempo = pulseIn(echo, HIGH);
  distancia = 0.0172 * tiempo;
  
  Serial.print("Distancia (cm): ");
  Serial.println(distancia);
  delay(500);
  
  if(distancia >= 100){
  
    noTone(buzzer);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
  }
  else{
    
  	digitalWrite(ledGreen, LOW);
    tone(buzzer, 1000);
    digitalWrite(ledRed, HIGH);
    delay(distancia * 10);
    noTone(buzzer);
    digitalWrite(ledRed, LOW);
    delay(distancia * 10);
  }
  
}

