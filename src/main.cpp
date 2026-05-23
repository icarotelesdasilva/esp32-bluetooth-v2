#include "BluetoothSerial.h"

BluetoothSerial SerialBT; 

void setup() {
  Serial.begin(115200); 
  
  delay(2000);

  SerialBT.begin("ESP32_ICR"); 
  
  Serial.println("Bluetooth em modo de pareamento.");
}

void loop() { 
  
  if (Serial.available()) {
   
    SerialBT.write(Serial.read()); 
  }
  
  
  if (SerialBT.available()) {
  
    Serial.write(SerialBT.read()); 
  }
}
