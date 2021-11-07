void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("working..");
}

void loop() {

    if(Serial.available()){
      char val = Serial.read();
      Serial.println(val);
      if (val=='1'){
         digitalWrite(13, 1);
      }
      else{
         digitalWrite(13, 0);
    }
    }

  
}
