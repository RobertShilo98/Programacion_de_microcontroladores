/*
Autor: Roberto Rico Sandoval.
Fille: Comunicación entre dispositivo maestro y esclavo.
Date: 18/12/2022
*/

#include <Wire.h>

void setup(){

  // Unir buses en cuadrante 12C.
  Wire.begin(1);
}

// Pines digitales en uso.
byte pin[] = {2,3,4,5,6};
byte estado = 0;

void loop(){

  for(int i=0; i<5; i++){
  
    //Iniciar transmisión de datos.
    Wire.beginTransmission(1);
    
    // Enviar 1 byte, para actualizar el estado a ON.
    Wire.write(pin[i]);
    
    // Sí byte == 0 (OFF), Sí byte == 1 (ON).
    Wire.write(estado);
    
    // Finalizar transmisión.
    Wire.endTransmission();
    delay(1000);
  }
  
  // Cambio de estado.
  if(estado == 0){
  
    estado = 1;
  }
  else{
  
    estado = 0;
  }
}

