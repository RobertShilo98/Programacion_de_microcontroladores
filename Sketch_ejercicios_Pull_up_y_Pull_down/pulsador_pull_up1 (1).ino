/*
Autor: Roberto Rico Sandoval.
Fille: Pulsador con resistencias.
Date: 19/12/2022
*/

int led = 9;
int pulsador = 4;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
}

void loop()
{
  
  if(digitalRead(pulsador) == LOW){
  
    digitalWrite(led, HIGH);
  }
  else{
  
    digitalWrite(led, LOW);
  }
}

