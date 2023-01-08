/*
Autor: Roberto Rico Sandoval.
Fille: Lecturas digitales.
Date: 08/ 12/ 2022
*/

#define boton_1 31
#define led_1 31

boolean valor_led1 = LOW;
boolean valor_boton1 = LOW;


void setup()
{
  pinMode(led_1, OUTPUT);
  pinMode(boton_1, INPUT);
}

void loop()
{
  while(digitalRead(boton_1) == LOW){
  
    valor_boton1 = LOW;
  }
  
  if(valor_boton1 = LOW){
  
    valor_led1 = !valor_led1;
    digitalWrite(led_1, valor_led1);
    valor_boton1 = HIGH;
  }
  
}

