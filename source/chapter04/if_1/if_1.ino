void setup() {
  Serial.begin(9600);
}

void loop() { 
  int score = 80;

  if(score >= 80)
  {
    Serial.println("시험에 합격하셨습니다.");
  }
   Serial.println("수고하셨습니다.");
   Serial.end();
}
