void setup() {
  Serial.begin(9600);
}

void loop() { 
  int score = 90;

  if(score >= 90)
  {
    Serial.println("성적이 A등급입니다.");
  }
  else if(score >= 80)
  {
    Serial.println("성적이 B등급입니다.");
  }
  else if(score >= 70)
  {
    Serial.println("성적이 C등급입니다.");
  }
  else
  {
    Serial.println("성적이 D등급입니다.");
  }
  Serial.println("수고하셨습니다.");
  Serial.end();
}
