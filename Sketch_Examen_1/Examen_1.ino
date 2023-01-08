/*
Autor: Roberto Rico Sandoval
Fille. Primer exámen de programación de microcontroladores.
Date: 13/ 12/ 2022
*/

#define ledPin 6
#define buttonPin 5

int pushButtonCounter = 0;
int buttonState = 0;
int lastButtonState = 0;

void setup(){

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){

  buttonState = digitalRead(buttonPin);
  
  if(buttonState == HIGH){
  
    pushButtonCounter++;
    Serial.print("\nON");
    delay(1000);
    Serial.print("\nNumero del boton pulsado");
    Serial.print(pushButtonCounter);
  }
  else{
  
    Serial.print("\nOFF");
    delay(1000);
  }
  
  lastButtonState = buttonState;
  
  if(pushButtonCounter % 4 == 0){
  
    digitalWrite(ledPin, HIGH);
  }
  else{
  
    digitalWrite(ledPin, LOW);
  }
}

