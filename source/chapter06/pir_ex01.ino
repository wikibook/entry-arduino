int led_red = 13;
int pirPin = 8;

void setup() {
  pinMode(led_red, OUTPUT); 
  pinMode(pirPin, INPUT);
}

void loop() {
  int pir_val = digitalRead(pirPin);
  
  if(pir_val == HIGH) 
  {
    digitalWrite(led_red, HIGH);
  }
  else 
  {
    digitalWrite(led_red, LOW);
  }
}
