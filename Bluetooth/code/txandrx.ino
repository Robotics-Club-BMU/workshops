void setup() {
  pinMode(13, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(13);
  Serial.println(1-value);
  
  Serial.write(String(1-value)[0]);
  digitalWrite(12, 1-value);
  delay(100);
}
