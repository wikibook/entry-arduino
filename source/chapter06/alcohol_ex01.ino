int led_red = 13;

void setup() {
  pinMode(led_red, OUTPUT);  
}

void loop() {
  int alcohol_val = analogRead(A0); 
  
  if(alcohol_val > 700) 
  {
    digitalWrite(led_red, HIGH);
  }
  else 
  {
    digitalWrite(led_red, LOW);
  }
  delay(500); 
}
