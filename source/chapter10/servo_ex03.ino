#include <Servo.h>
Servo myservo;   
int led_red = 11; 
int pos = 0;           

void setup() {
  myservo.attach(6);
  pinMode(led_red, OUTPUT);
}

void loop() {
  int pot_val = analogRead(A0); 
  pos = map(pot_val * -1, -1023, 0, 0, 180);
  myservo.write(pos);  
  analogWrite(led_red, map(pot_val, 0, 1023, 0, 255));    
}
