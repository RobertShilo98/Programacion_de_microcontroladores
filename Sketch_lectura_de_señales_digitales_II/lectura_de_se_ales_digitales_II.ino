/*
Autor: Roberto Rico Sandoval.
Fille: Lectura de señales digitales.
Date: 02/ 01/ 2023
*/

int pot = 2;
int led = 3;

int valorPot = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  valorPot = analogRead(pot);
  Serial.print("Valor del potenciometro: ");
  Serial.println(valorPot);
  digitalWrite(led, HIGH);
  delay(valorPot);
  digitalWrite(led, LOW);
  delay(500);
}

