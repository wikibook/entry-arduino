int trigPin = 2;
int echoPin = 4;
int led_red = 13;
int piezoBuzzer = 8;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led_red, OUTPUT);
  pinMode(piezoBuzzer, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(1);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);      

  unsigned long distance = (pulseIn(echoPin, HIGH) * 34000 / 1000000 ) / 2;  

  if (distance < 4) 
  {
    digitalWrite(led_red, HIGH);
    tone(piezoBuzzer, 262); 
    delay(1000);
    digitalWrite(led_red, LOW);
    tone(piezoBuzzer, 392); 
    delay(1000);
    noTone(piezoBuzzer);
  }
}
