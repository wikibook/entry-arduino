void setup() {
  Serial.begin(9600);
}

void loop() { 
  int x = 10;
  int y = x % 2;

  if(y == 0)
  {
    Serial.println("짝수입니다..");
  }
  else
  {
    Serial.println("홀수입니다.");
  }
   Serial.println("수고하셨습니다.");
   Serial.end();
}
