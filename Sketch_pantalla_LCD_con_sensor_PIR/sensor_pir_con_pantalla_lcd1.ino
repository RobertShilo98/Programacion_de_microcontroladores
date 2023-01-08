/*
Autor: Roberto Rico Sandoval.
Fille: Programa que detecta un objeto PIR.
Date: 23/ 12/ 2022
*/

#include <LiquidCrystal.h>

#define RS 9
#define EN 8
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define pirPin 10

int statusPIR = 0;

LiquidCrystal LCD(RS,EN,D4,D5,D6,D7);

void setup(){

  pinMode(pirPin, INPUT);
  LCD.begin(16,2);
  LCD.setCursor(0,0);
  LCD.print("Pantalla LCD");
  delay(3000);
  LCD.clear();
  
}

void loop(){

  statusPIR = digitalRead(pirPin);
  
  if(statusPIR == HIGH){
  
    LCD.setCursor(0,0);
    LCD.print("Hay alguien ahi?");
    delay(1000);
    LCD.clear();
    
  }
  else{
    
  	LCD.setCursor(0,0);
    LCD.print("PIR OFF");
    delay(1000);
    LCD.clear();
  }
}

