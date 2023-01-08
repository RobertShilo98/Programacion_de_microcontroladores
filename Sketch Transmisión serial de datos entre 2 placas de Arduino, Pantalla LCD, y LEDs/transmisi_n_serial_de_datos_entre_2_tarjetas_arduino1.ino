/*
Autor: Roberto Jaime Rico Sandoval.
Fille: Lector de temperatura y muestra de datos en LCD.
Date: 20/12/2022

************************************************************
DESCRIPCIÓN:

Comunicación serial entre dos tarjetas de Arduino con 
comunicación RX y TX incluida.

1) La primer tarjeta, recibe los datos de la temperatura y 
los transmite a la segunda placa, al igual, interprete la
temperatura con base al color de un LED.

2) Los datos recibidos en la segunda placa de Arduino, son
mandados a la pantalla LCD, para mostrarlos gráficamente,
para la lectura del humano.
************************************************************
*/

// Agregar librería de lectura de pantalla LCD.
#include <LiquidCrystal.h>

LiquidCrystal lcd (2,3,4,5,11,12);

char datos[13];
int posicion = 0;

char *resultado = NULL;
char separador[] = "CFK";

int valores[] = {0,0,0};

int cen;
int fah;
int kelvin;

unsigned long Tiempo_LCD;
unsigned long Tiempo_TX;

void setup(){

  lcd.begin(16,2);
  Serial.begin(9600);
  delay(1000);
  Tiempo_LCD = millis();
  Tiempo_TX = millis();
}

void loop(){

  boolean segmentacion;
  
  while(Serial.available()>0){
  
    delay(5);
    datos[posicion] = Serial.read();
    posicion++;
    segmentacion = true;
  }
  
  posicion = 0;
  
  if(segmentacion == true){
  
    int index = 0;
    resultado = strtok(datos, separador);
    
    while((resultado != NULL)&&(index<3)){
      
      valores[index++] = atoi(resultado);
      resultado = strtok(NULL, separador);
  	}
    
  }
  
  segmentacion = false;
  
  cen = valores[0];
  fah = valores[1];
  kelvin = valores[2];
  
  if((millis() - Tiempo_LCD)>500){
  
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print(cen);
    lcd.print("C");
    lcd.setCursor(6,1);
    lcd.print(fah);
    lcd.print("F");
    lcd.setCursor(12,1);
    lcd.print(kelvin);
    lcd.print("K");
    
    Tiempo_LCD = millis();
  }
  
  if((millis() - Tiempo_TX)>500){
  
    if((cen >= 20)&&(cen <= 25)){
    
      lcd.setCursor(0,0);
      lcd.print("Temperatura Normal.");
      Serial.print("n");
    }
    
    else if(cen < 20){
    
      lcd.setCursor(0,0);
      lcd.print("Temperatura Baja.");
      Serial.print("b");
    }
    
    else{
    
      lcd.setCursor(0,0);
      lcd.print("Temperatura Alta.");
      Serial.print("a");
    }
  }
  
  Tiempo_TX = millis();
  
}

