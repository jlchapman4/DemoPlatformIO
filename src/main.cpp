#include <Arduino.h>

const byte LED_GPIO = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_GPIO,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("ON");
  digitalWrite(LED_GPIO, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_GPIO, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("OFF");
  delay(1000); 
}