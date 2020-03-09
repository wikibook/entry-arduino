int result;
int a = 10;
int b = 20;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("[ 논리 연산자 ]");
  result = (a==10 && b==10); 
  Serial.print("&& 결괏값 : ");
  Serial.println(result);
  result = (a==10 || b==10); 
  Serial.print("|| 결괏값 : ");
  Serial.println(result);
  result = !a;
  Serial.print("! 결괏값 : ");
  Serial.println(result); 
  Serial.end();
}
