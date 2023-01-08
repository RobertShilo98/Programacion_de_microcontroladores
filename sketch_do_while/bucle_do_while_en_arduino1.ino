/*
Autor: Roberto Rico Sandoval.
Fille: Tabla de múltiplicar con bucle do while.
Date: 05/ 12/ 2022
*/

float numero = 8.7639;
int inicio = 0;

void setup()
{
  
  Serial.begin(9600);
  Serial.print("\nTabla de multiplicar de: ");
  Serial.print(numero);
}

void loop()
{
  do{
    
    Serial.print("\n");
  	inicio++;
    
    Serial.print(numero);
    Serial.print(" x ");
    Serial.print(inicio);
    Serial.print(" = ");
    Serial.print(numero * inicio);
      
    delay(3000);
    
  }while(inicio < 10);
  
  exit(0);
}

