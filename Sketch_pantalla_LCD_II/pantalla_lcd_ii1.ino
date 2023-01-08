/*
Autor: Roberto Rico Sandoval.
Fille: Pantalla LCD II.
Date: 06/ 01/ 2023
*/

#include <LiquidCrystal.h>

int RS = 7;
int E = 6;
int DB4 = 5;
int DB5 = 4;
int DB6 = 3;
int DB7 = 2;

LiquidCrystal lcd(RS, E, DB4, DB5, DB6, DB7);

void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){
  
    delay(100);
    lcd.clear();
    
    while(Serial.available() > 0){
    
      lcd.write(Serial.read());
    }
  }
}

