/*
Autor: Roberto Rico Sandoval.
Fille: Semáforo con LED's.
Date: 28/ 12/ 2022
*/

const int ledGray = 2;
const int ledRed = 3;
const int ledBlue = 4;
const int ledOrange = 5;
const int ledYellow = 6;
const int ledGreen = 7;

int lectura;

void setup()
{
  
  Serial.begin(9600);
  pinMode(ledGray, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  
}

void loop()
{
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledOrange, LOW);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGray, LOW);
  
  if(Serial.available() > 0){
  
    lectura = Serial.read();
    
    if(lectura == '1'){
    
      Serial.print("Led blanco encendido: ");
      Serial.println(lectura);
      digitalWrite(ledGray, HIGH);
      delay(4000);
    }
    
    else if(lectura == '2'){
    
      Serial.print("Led rojo encendido: ");
      Serial.println(lectura);
      digitalWrite(ledRed, HIGH);
      delay(4000);
    }
    
    else if(lectura == '3'){
    
      Serial.print("Led azul encendido: ");
      Serial.println(lectura);
      digitalWrite(ledBlue, HIGH);
      delay(4000);
    }
    
    else if(lectura == '4'){
    
      Serial.print("Led naranja encendido: ");
      Serial.println(lectura);
      digitalWrite(ledOrange, HIGH);
      delay(4000);
    }
    
    else if(lectura == '5'){
    
      Serial.print("Led amarillo encendido: ");
      Serial.println(lectura);
      digitalWrite(ledYellow, HIGH);
      delay(4000);
    }
    
    else if(lectura == '6'){
    
      Serial.print("Led verde encendido: ");
      Serial.println(lectura);
      digitalWrite(ledGreen, HIGH);
      delay(4000);
    }
  }
}

