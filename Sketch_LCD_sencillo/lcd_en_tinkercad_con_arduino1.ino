/*
Autor: Roberto RIco Sandoval.
Fille: Pantalla LCD conectada a una placa de Arduino.
Date: 27/ 12/ 2022
*/

#include <LiquidCrystal.h>

// Creación de objeto LCD con pines conectados al Arduino.
LiquidCrystal lcd(2,3,4,5,6,7);

void setup()
{
  
  // Dimensión de uso del dispositivo LCD (16*2).
  lcd.begin(16,2);
  lcd.print("Arduino iniciado");
  
}

void loop()
{
  
}

