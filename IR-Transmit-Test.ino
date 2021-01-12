#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>
 
#include <MeMCore.h>
 
MeIR ir;
 
#include <MeMCore.h>
 
void setup() {
  Serial.begin(9600);
  ir.begin();
}
 
void loop() {
  ir.sendString("Winning");
  Serial.println("Sending IR String: Winning" );
}
