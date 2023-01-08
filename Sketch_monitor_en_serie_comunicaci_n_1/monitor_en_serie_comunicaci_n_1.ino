// C++ code
//
int dato = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  while (Serial.available() > 0) {
    Serial.println("Toca la tecla correcta.");
    dato = Serial.read();
    if (dato == 97) {
      // Sí dato es igual a 97
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("Tecla A (Apagar)");
    }
    if (dato == 98) {
      // Sí dato es igual a 98
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("Tecla B (Apagar)");
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}