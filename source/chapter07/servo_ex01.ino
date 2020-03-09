#include <Servo.h>

Servo myservo;         
int led_red = 13;
int led_yellow = 12;
int pos = 0;             

void setup() {
  myservo.attach(11);      
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
}

void loop() {
  for(pos = 0; pos <= 180; pos += 1) 
  {
    myservo.write(pos);  
    delay(10);               
  }
  digitalWrite(led_red, HIGH);
  delay(1000);    
  digitalWrite(led_red, LOW);
  
  for(pos = 180; pos >= 0; pos -= 1) 
  {
    myservo.write(pos); 
    delay(10);              
  }
  digitalWrite(led_yellow, HIGH);
  delay(1000);    
  digitalWrite(led_yellow, LOW);
}
