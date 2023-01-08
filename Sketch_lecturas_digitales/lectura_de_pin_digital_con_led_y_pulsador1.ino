/*
Autor: Roberto Rico Sandoval.
Fille: Señal digital con uso de LED y botón. 
Date: 18/ 12/ 2022
*/

int led = 2;

void setup()
{
  pinMode(led, OUTPUT);
  
}

void loop()
{
  if (digitalRead(3) == HIGH){
  	
    digitalWrite(led, HIGH);
  }
  else{
  	
    digitalWrite(led, LOW);
  }
  
}

