int trigPin = 2;
int echoPin = 4;
int led_red = 13;
int led_green = 12;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
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
    digitalWrite(led_green, LOW);
  } 
  else 
  {
    digitalWrite(led_red, LOW);
    digitalWrite(led_green, HIGH);
  }
  delay(500);
}
