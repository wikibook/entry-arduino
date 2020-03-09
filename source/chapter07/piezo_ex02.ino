int piezoBuzzer = 8;
int tones[] = {523, 587, 659, 698, 784, 880, 988, 1046};

void setup() {
  pinMode(piezoBuzzer, OUTPUT);
  
  for(int i = 0; i < 8; i++)  
  {                        
    tone(piezoBuzzer, tones[i]);   
    delay(1000);
  }
  noTone(piezoBuzzer);
}

void loop() {
  
}
