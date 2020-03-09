int result;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("[ 산술 연산자 ]");
  result = 10 + 10;
  Serial.print("더하기 연산자 결괏값 : ");
  Serial.println(result);
  result = 10 - 10;
  Serial.print("빼기 연산자 결괏값 : ");
  Serial.println(result);
  result = 10 * 10;
  Serial.print("곱하기 연산자 결괏값 : ");
  Serial.println(result); 
  result = 10 / 10;
  Serial.print("나누기 연산자 결괏값 : ");
  Serial.println(result);  
  result = 10 % 10;
  Serial.print("나머지 연산자 결괏값 : ");
  Serial.println(result);   
  Serial.end();
}
