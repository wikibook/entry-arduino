#include <Servo.h>
Servo myservo;   
int pos = 0;           

void setup() {
  myservo.attach(6);
}

void loop() {
  int rain_val = analogRead(A0); 
  
  if(rain_val < 1000) 
  {
    for(pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos); 
      delay(10);                                              
    }
    
    delay(map(rain_val, 0, 1023, 0, 3000));   
    
    for(pos = 180; pos >= 0; pos -= 1) 
    {
      myservo.write(pos); 
      delay(10);                                            
    }     
    delay(map(rain_val, 0, 1023, 0, 3000));            
  }
}
