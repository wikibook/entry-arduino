void setup() {
  Serial.begin(9600);
}

void loop() { 
  int i = 0;
  while(i <= 10)
  {
    Serial.println(i);
    i = i + 1;  
  }  
  Serial.println("수고하셨습니다.");
  Serial.end();
}
