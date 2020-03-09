int result;
int a = 10;
int b = 20;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("[ 관계(비교) 연산자 ]");
  result = a > b;
  Serial.print(">(크다) 결괏값 : ");
  Serial.println(result);
  result = a >= b;
  Serial.print(">=(크거나 같다) 결괏값 : ");
  Serial.println(result);
  result = a < b;
  Serial.print("<(작다) 결괏값 : ");
  Serial.println(result); 
  result = a <= b;
  Serial.print("<=(작거나 같다) 결괏값 : ");
  Serial.println(result);
  result = a == b;
  Serial.print("==(같다) 결괏값 : ");
  Serial.println(result); 
  result = a != b;
  Serial.print("!=(다르다) 결괏값 : ");
  Serial.println(result);    
  Serial.end();
}
