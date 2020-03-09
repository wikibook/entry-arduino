#include <Servo.h>
Servo myservo;  
int trigPin = 2;
int echoPin = 4;


void setup() {
  myservo.attach(6);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(1);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);      
  
  unsigned long distance = (pulseIn(echoPin, HIGH) * 34000 / 1000000 ) / 2;  
    
  if(distance < 4) 
  {
    myservo.write(90);   
  }
  else 
  {
    myservo.write(0); 
  }
}
