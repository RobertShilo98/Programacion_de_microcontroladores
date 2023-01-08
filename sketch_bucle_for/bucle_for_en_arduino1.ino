/*
Autor: Roberto Rico Sandoval.
Fille: Práctica bucle for en Arduino.
Date: 05/ 12/ 2022
*/

int multi;

void setup(){
  
  Serial.begin(9600);
  Serial.print("Tabla de multiplicar en bucle for");
  
}

void loop()
{
  multi = 8;
  
  Serial.print("Tabla de multiplicar del: ");
  Serial.print(multi);
  
  for(int itera = 1; itera <= 10; itera++){
  	
    Serial.print("\n");
  	Serial.print(multi);
    Serial.print(" x ");
    Serial.print(itera);
    Serial.print(" = ");  
    Serial.print(multi * itera);
    
    delay(2000);
  }
  
  exit(0);  // Salir del void loop de Arduino.
  
}

