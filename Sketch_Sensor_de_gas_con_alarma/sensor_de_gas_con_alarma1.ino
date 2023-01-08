/*
Autor: Roberto Rico Sandoval.
Fille: Sensor de gases.
Date: 02/ 01/ 2023
*/

int gas;
int bocina = 2;

void setup()
{
  pinMode(A5, INPUT);
  pinMode(bocina, OUTPUT);
}

void loop()
{
  gas = analogRead(A5);
  
  if(gas >= 550){
  
    tone(bocina, 437, 150);
    delay(500);
  }
}

