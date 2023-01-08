/*
Autor: Roberto Rico Sandoval.
Fille: Medidor de temperaturas con lectura de pantalla LCD.
Date: 20/12/2022

*****************************************************************
DESCRIPCIÓN:

Comunicación serial de datos entre dos Arduinos con puertos
RX y TX incluidos.

La tarjeta 1 de Arduino, toma los datos de las temperaturas
(Celsius, Fahrenheit, Kelvin), y el encendido de los LED's
según la temperatura.

La tarjeta 2 de Arduino, mandará los datos a la pantalla LCD.
Mostrará solo una escala entre 20c y 25c.
*****************************************************************
*/

// Asiganación de puerto analógico.
int sensor = A0;
int valorSensor = 0;
float temperatura = 0;

int kelvin = 0;
int cen = 0;
int fah = 0;

// Definición de pines digitales.
int amarillo = 8;
int verde = 9;
int rojo = 10;

unsigned long tiempo_TX;

void setup()
{
  
  Serial.begin(9600); // Velocidad de comunicación a 1152000 batios.
  delay(1000);
  
  // Pines de salida digital.
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  
  // Pines con inicio de apagado (Nivel 0).
  digitalWrite(rojo, LOW);
  digitalWrite(amarillo, LOW);
  digitalWrite(verde, LOW);
  
  // Registro de tiempo de ejecución.
  tiempo_TX = millis();
}

void loop()
{
  // Lectura del valor del sensor de temperatura. 
  valorSensor = analogRead(sensor);
  temperatura = ((valorSensor*(5000/1024.0))-500)/10;
  
  // Grados Celcius.
  cen = (int)temperatura;
  
  // Grados Fahrenheit.
  fah = (int)(cen*1.8)+32;
  
  // Grados Kelvin.
  kelvin = (int)(cen+273.15);
  
  // Transmisión de datos por segundos.
  
  if((millis() - tiempo_TX)>500){
  
    // Transmisión de grados Centigrados.
    Serial.print(cen);
    Serial.print("C");
    
    // Transmisión de grados Fahrenheit.
    Serial.print(fah);
    Serial.print("F");
    
    // Transmisión de grados Kelvin.
    Serial.print(kelvin);
    Serial.print("K");
    
    // Actualización del tiempo.
  	tiempo_TX = millis();
  }
  
  // Recepción de datos.
  if(Serial.available()>0){
  
    int datos = Serial.read();
    
    if(datos == 'a'){
      
      // Temperatura alta, se enciende el LED rojo.
      digitalWrite(rojo, HIGH);
      digitalWrite(verde, LOW);
      digitalWrite(amarillo, LOW);
    }
    
    if(datos == 'b'){
      
      // Temperatura media, se enciende el LED amarillo.
      digitalWrite(rojo, LOW);
      digitalWrite(verde, LOW);
      digitalWrite(amarillo, HIGH);
    }
    
    if(datos == 'n'){
      
      // Temperatura normal, se enciende el LED verde.
      digitalWrite(rojo, LOW);
      digitalWrite(verde, HIGH);
      digitalWrite(amarillo, LOW);
    }
  }
  
}

