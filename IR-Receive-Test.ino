File: IR_Receive_Test.ino

#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include <MeMCore.h>

MeIR ir_receiver;

#include <MeMCore.h>
 
void setup() {
Serial.begin(9600);
ir_receiver.begin();
}

void loop() {
Serial.println("IR Code: " + ir_receiver.getString());
}
