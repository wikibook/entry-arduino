int led_red = 11;  
  
void setup() {
  pinMode(led_red, OUTPUT); 
}

void loop() {
  int cds_val = analogRead(A0); 
  
  if(cds_val <= 400) 
  {
    digitalWrite(led_red, HIGH);
  }
  else
  {
    digitalWrite(led_red, LOW);
  }
  delay(200);
}
