int result = 10;
int a = 20;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("[ 대입 연산자 ]");
  Serial.print("result = 10 결괏값 : ");
  Serial.println(result);
  result = a + 10;
  Serial.print("result = a + 10 결괏값 : ");
  Serial.println(result);
  Serial.end();
}
