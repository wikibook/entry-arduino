void setup() {
  Serial.begin(9600);
}

void loop() { 
  char op = '+';

  switch(op)
  {
    case '+' : 
      Serial.println("덧셈입니다.");
      break;
    case '-' : 
      Serial.println("뺄셈입니다.");
      break; 
    case '*' : 
      Serial.println("곱셈입니다.");
      break;                                          
    case '/' : 
      Serial.println("나눗셈입니다.");
      break;   
    default :  
      Serial.println("지원되지 않는 연산자입니다.");
      break;            
  }
  Serial.println("수고하셨습니다.");
  Serial.end();
}
