/*
Autor: Roberto Rico Sandoval.
Fille: Estrucutra Switch Case en Arduino.
Date: 05/ 12/ 20222
*/

int porciento;
String nota;

void setup()
{
  
  Serial.begin(9600);
  Serial.print("Calificaciones de los alumnos.");
}

void loop()
{
  
  porciento = random(1, 10);
  nota = (String) porciento;
  
  switch (porciento){
  
  	case 1:
    Serial.print("\n\nEl porcentaje es de: " + nota);
    Serial.print("\nNO APROBADO.");
    break;
    
    case 2:
    Serial.print("\n\nEl porcentaje es de: " + nota);
    Serial.print("\nNO APROBADO.");
    break;
    
    case 3:
    Serial.print("\n\nEl porcentaje es de: " + nota);
    Serial.print("\nNO APROBADO.");
    break;
    
    case 4:
    Serial.print("\n\nEl porcentaje es de: " + nota);
    Serial.print("\nNO APROBADO.");
    break;
    
    case 5:
    Serial.print("\n\nEl porcentaje es de: " + nota);
    Serial.print("\nNO APROBADO.");
    break;
    
    case 6:
    Serial.print("\n\nEl porcentaje es de: " + nota);
    Serial.print("\nAPROBADO FELICIDADES.");
    break;
    
    case 7:
    Serial.print("\n\nEl porcentaje es de: " + nota);
    Serial.print("\nAPROBADO FELICIDADES.");
    break;
    
    case 8:
    Serial.print("\n\nEl porcentaje es de: " + nota);
    Serial.print("\nAPROBADO FELICIDADES.");
    break;
    
    case 9:
    Serial.print("\n\nEl porcentaje es de: " + nota);
    Serial.print("\nAPROBADO FELICIDADES.");
    break;
    
    case 10:
    Serial.print("\n\nEl porcentaje es de: " + nota);
    Serial.print("\nAPROBADO FELICIDADES.");
    break;
  }
  
  delay(4000); // Wait for 1000 millisecond(s)
}

