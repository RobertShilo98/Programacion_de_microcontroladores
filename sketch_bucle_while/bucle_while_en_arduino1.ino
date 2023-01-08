/*
Autor: Roberto Rico Sandoval.
Fille: Bucle while en Arduino.
Date: 05/ 12/ 2022
*/

float multiplo;
int itera;

void setup()
{
  
  Serial.begin(9600);
  Serial.print("Bucle while en Ardunio (Tabla de multiplicar.)");
}

void loop()
{
  
  multiplo = 58;
  itera = 0;
  
  Serial.print("\nTabla de multiplicar de: ");
  Serial.print(multiplo);
  
  while(itera <= 10){
  
  	Serial.print(multiplo);
    Serial.print(" x ");
    Serial.print(itera);
    Serial.print(" = ");
    Serial.print(multiplo * itera);
    Serial.print("\n");
    
    itera++;
    
    delay(3000);
  }
  
  exit(0);
  
}

