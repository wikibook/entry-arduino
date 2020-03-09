int piezoBuzzer = 8;

void setup() {
  pinMode(piezoBuzzer, OUTPUT);
  
  tone(piezoBuzzer, 523); 
  delay(1000);
  tone(piezoBuzzer, 587); 
  delay(1000);
  tone(piezoBuzzer, 659); 
  delay(1000);
  tone(piezoBuzzer, 698); 
  delay(1000);
  tone(piezoBuzzer, 784); 
  delay(1000);
  tone(piezoBuzzer, 880); 
  delay(1000);
  tone(piezoBuzzer, 988); 
  delay(1000);
  tone(piezoBuzzer, 1046); 
  delay(1000);
  noTone(piezoBuzzer);
}

void loop() {
  
}
