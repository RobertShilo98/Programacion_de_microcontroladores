/*
Autor: Roberto Rico Sandoval.
Fille: Teclado matricial 4x4
Date: 0+6/ 01/ 2023
*/

#include <Keypad.h>

const byte filas = 4;
const byte columnas = 4;

char keys[filas] [columnas] = {
	
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}  
};

byte pinesFIlas[filas] = {9,8,7,6};
byte pinesColumnas[columnas] = {5,4,3,2};

Keypad teclado = Keypad(makeKeymap(keys), pinesFIlas, pinesColumnas, filas, columnas);

char tecla;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  tecla = teclado.getKey();
  delay(100);
  
  if(tecla){
  
    Serial.print(tecla);
  }
}

