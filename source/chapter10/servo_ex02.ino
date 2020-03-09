#include <Servo.h>
Servo myservo;   
int pos = 0;           

void setup() {
  myservo.attach(6);  
}

void loop() {
  int water_val = analogRead(A0); 
  pos = map(water_val * -1, -800, 0, 0, 180);
  myservo.write(pos);    
}
