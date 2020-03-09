int led_red = 13;

void setup() {
  pinMode(led_red, OUTPUT); 
}

void loop() {
  int rain_val = analogRead(A0); 
                  
  if(rain_val < 500) 
  {        
    digitalWrite(led_red, HIGH);           
    delay(500);
    digitalWrite(led_red, LOW); 
    delay(500);
  } 
  else 
  {                             
    digitalWrite(led_red, LOW); 
  } 
}
