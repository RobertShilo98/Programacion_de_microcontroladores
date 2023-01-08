/*
Autor: Roberto Rico Sandoval.
Fille: Estructura if / else en Arduino.
Date: 05/ 12/ 2022
*/

double numerosAleatorios;
String texto;

void setup()
{
  Serial.begin(9600);
  Serial.println("Inicio del programa");
}

void loop()
{
  numerosAleatorios = random(1,10);
  
  if (numerosAleatorios >= 5){
  	
  	Serial.print("\nEl numero es mayor o igual a 5");
    String texto = (String) numerosAleatorios;
  	Serial.print("\nEl numero es:" + texto);
      
  }
  
  else{
  
  	Serial.print("\nEl numero NO es mayor a 5");
    String texto = (String) numerosAleatorios;
    Serial.print("\nEl numero es:" + texto);
  }
  
  delay(1000);
  
}

