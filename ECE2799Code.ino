#include "LowPower.h"

const int transistorPin = 8; // Transistor in on Digital pin 8.
const int sleepDuration = 3000; // 3 seconds
const int pulseDuration = 500; //0.5 seconds

void setup() {
  pinMode(transistorPin, OUTPUT);
}

void loop() {

  LowPower.powerDown(sleepDuration, ADC_OFF, BOD_OFF);  

  //Pulse the transistor high for 0.5 seconds
  digitalWrite(transistorPin, HIGH);
  delay(pulseDuration);
  digitalWrite(transistorPin, LOW);

}
