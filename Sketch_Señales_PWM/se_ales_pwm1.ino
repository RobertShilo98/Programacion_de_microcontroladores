/*
Autor: Roberto Rico Sandoval.
Fille: Señales PWM.
Date: 03/ 01/ 2023
*/

int led = A5;
int contador;

void setup()
{
}

void loop()
{
  for(contador = 0; contador <= 255; contador += 5){
  
    analogWrite(led, contador);
    delay(30);
  }
  
  for(contador = 255; contador >= 0; contador -= 5){
  
    analogWrite(led, contador);
    delay(30);
  }
}

