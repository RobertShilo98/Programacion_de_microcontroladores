// C++ code
//
long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  if (0.01723 * readUltrasonicDistance(11, 10) > 15) {
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}