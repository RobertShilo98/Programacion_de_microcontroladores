// Autor: Roberto Rico Sandoval.
// Fille: Hola mundo en Arduino.
// Date: 04/ 05/ 2022

void setup()
{
	pinMode(13,OUTPUT);
}

void loop()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}

