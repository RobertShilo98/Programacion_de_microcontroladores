/*
Autor: Roberto Rico Sandoval.
Fille: Comunicación serial.
Date: 08/ 12/ 2022
*/

// Variable con capacidad de 16 carácteres.
char inputData[30];

void setup(){

  // Comunicación con velocidad de 9600 Mbps.
  Serial.begin(9600);
}

void loop(){
  
  // Comprobar si hay información en el bus serial de comunicación.
  if(Serial.available() > 0){
  	
    // Espera de la carga de datos en el bus serial.
    delay(1000);
    int i = 0;
    
    // Almacenamiento de datos en arreglo (Array).
    while(Serial.available() > 0){
    
      inputData[i] = Serial.read();
      i++;
    }
    
    // Imprimir el arreglo (Array).
    Serial.println(inputData);
    
    // Recorrer datos del arreglo e igualar a 0
    for(int j = 0; j < 16; j++){
    
      inputData[j] = 0;
    }
  }
}


