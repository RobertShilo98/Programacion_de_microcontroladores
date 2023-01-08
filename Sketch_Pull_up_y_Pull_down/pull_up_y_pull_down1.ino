/*
Autor: Roberto Rico Sandoval.
Fille: Pull up y Pull down
Date: 15/ 12/ 2022
*/

#define pinEntrada 31

boolean flag = false;
float tiempor = 0;
float tiempof = 0;

void setup()
{
  pinMode(pinEntrada, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  tiempor = millis();
  
  while(digitalRead(pinEntrada) == 1.0){
  
    flag = true;
  }
  
  tiempof = millis();
  
  if(flag == true){
  
    tiempof = tiempof - tiempor;
    tiempof /= 1000.0;
    
    Serial.print("\nEl botón se pulso");
    Serial.print(tiempof);
    Serial.print(" segundo.");
    
    tiempof = 0;
    flag = false;
    
  }
}

