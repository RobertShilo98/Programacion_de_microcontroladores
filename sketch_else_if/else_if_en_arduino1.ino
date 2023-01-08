/*
Autor: Roberto Rico Sandoval.
Fille: Estrucutra Switch Case en Arduino.
Date: 05/ 12/ 2022
*/

int respuesta;
int dias[7];
String texto;




void setup()
{
  Serial.begin(9600);
  Serial.print("Elige cual es tu día preferido de la semana.");
}

void loop()
{
  
  int respuesta = 12;
  
  String dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
  
  if (respuesta == 1){
    
    Serial.print("\nTu dia preferido es el " + dias[0]);
  }
  
  else if(respuesta == 2){
  
  	Serial.print("\nTu dia preferido es el " + dias[1]);
  }
  
  else if(respuesta == 3){
  
  	Serial.print("\nTu dia preferido es el " + dias[2]);
  }
  
  else if(respuesta == 4){
  
  	Serial.print("\nTu dia preferido es el " + dias[3]);
  }
  
  else if(respuesta == 5){
  
  	Serial.print("\nTu dia preferido es el " + dias[4]);
  }
  
  else if(respuesta == 6){
  
  	Serial.print("\nTu dia preferido es el " + dias[5]);
  }
  
  else if(respuesta == 7){
  
  	Serial.print("\nTu dia preferido es el " + dias[6]);
  }
  
  else{
    
  	String texto = (String) respuesta;
  	Serial.print("\nNo existe ese dia de la semana - " + texto);
  }
  
  delay(3000);
}

