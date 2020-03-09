void setup() {
  Serial.begin(9600);
}

void loop() { 
  for(int i = 0; i<= 10 ; i++)
  {
    Serial.println(i);
  }  
  Serial.println("수고하셨습니다.");
  Serial.end();
}
