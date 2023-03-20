#include <Arduino.h>
float inBytes;
int motorPin = 9;
int k = 0;

void setup() {

  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  if (Serial.available() > 1){
    k = Serial.parseInt();//Serial.readStringUntil('\n');
    
  Serial.println(k);
  analogWrite(motorPin, k);
    
  }
}
