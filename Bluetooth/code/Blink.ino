/*
  ESP8266 Blink by Simon Peter
  Blink the blue LED on the ESP-01 module
  This example code is in the public domain

  The blue LED on the ESP-01 module is connected to GPIO1
  (which is also the TXD pin; so we cannot use Serial.print() at the same time)

  Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

void setup() {
  pinMode(D1, OUTPUT);   
  pinMode(D0, OUTPUT); 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D1, LOW);  
  digitalWrite(D0, HIGH);  
  delay(1000);                     
  digitalWrite(D1, HIGH);  
  digitalWrite(D0, LOW); 
  delay(1000);                     
}
