/*
Autor: Roberto Rico Sandoval.
Fille: Sensor de gas complejo.
Date: 05/ 01/ 2023
*/

const int piezo = 13;
const int lRojo = 12;
const int lNaranja = 11;
const int lAmarillo = 10;
const int lVerde = 9;
const int lAzul = 8;
const int gas = A5;

void setup()
{
  pinMode(lRojo, OUTPUT);
  pinMode(piezo, OUTPUT);
  pinMode(lNaranja, OUTPUT);
  pinMode(lAmarillo, OUTPUT);
  pinMode(lVerde, OUTPUT);
  pinMode(lAzul, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int valor = analogRead(gas);
  valor = map(valor, 300, 750, 0, 100);
  
  if(valor <= 20){
  
    digitalWrite(lRojo, LOW);
    digitalWrite(lNaranja, LOW);
    digitalWrite(lAmarillo, LOW);
    digitalWrite(lVerde, LOW);
    digitalWrite(lAzul, HIGH);
  }
  
  else if(valor <= 40){
  
    digitalWrite(lRojo, LOW);
    digitalWrite(lNaranja, LOW);
    digitalWrite(lAmarillo, LOW);
    digitalWrite(lVerde, HIGH);
    digitalWrite(lAzul, LOW);
  }
  
  else if(valor <= 60){
  
    digitalWrite(lRojo, LOW);
    digitalWrite(lNaranja, LOW);
    digitalWrite(lAmarillo, HIGH);
    digitalWrite(lVerde, LOW);
    digitalWrite(lAzul, LOW);
  }
  
  else if(valor <= 80){
  
    digitalWrite(lRojo, LOW);
    digitalWrite(lNaranja, HIGH);
    digitalWrite(lAmarillo, LOW);
    digitalWrite(lVerde, LOW);
    digitalWrite(lAzul, LOW);
  }
  
  else if(valor > 80){
  
    digitalWrite(lRojo, HIGH);
    digitalWrite(lNaranja, LOW);
    digitalWrite(lAmarillo, LOW);
    digitalWrite(lVerde, LOW);
    digitalWrite(lAzul, LOW);
    
    tone(piezo,261.63,100);
  }
  
  Serial.println(valor);
  delay(500);
}

