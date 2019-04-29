/*
Digipot script
for DS1803

By: Saarang Panchavati

*/

#include <Wire.h>
//const float min_resistance = 504.5; //the minimum resistance
const float rstep = 173.4367;
float resistance = 517.27;

void setup() {
  Wire.begin();
  Serial.begin(9600);
  Serial.println("Ready");
}

byte val = 255;
void loop() {
  if(Serial.available()){
    Serial.println(resistance);
    Wire.beginTransmission(0x28);
    Wire.write(0xA9);      
    Wire.write(val);
    Wire.endTransmission();     // stop transmitting
    while(Serial.read()!='1'){}
    resistance = resistance + rstep;
    val--;
    if (val == 0) {
      Serial.println('Z');
     }
  }
  
}
