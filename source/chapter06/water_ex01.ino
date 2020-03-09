int led_red = 13;
int led_green = 12;

void setup() {
  pinMode(led_red, OUTPUT); 
  pinMode(led_green, OUTPUT); 
} 
  
void loop() { 
  int water_val = analogRead(A0); 
  
  if(water_val < 100) 
  {
    digitalWrite(led_green, HIGH);
  }
  else 
  {
    digitalWrite(led_green, LOW);
  }
  
  if(water_val >= 700) 
  {
    digitalWrite(led_red, HIGH);
  }
  else 
  {
    digitalWrite(led_red, LOW);
  }       
  delay(500); 
}
