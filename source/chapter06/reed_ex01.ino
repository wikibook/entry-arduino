int led_red = 13;
int reedPin = 8;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(reedPin, INPUT);
}

void loop() {
  int reed_val = digitalRead(reedPin);
  
  if(reed_val == HIGH) 
  {
    digitalWrite(led_red, LOW);
  } 
  else 
  {
    digitalWrite(led_red, HIGH);
  }
}


 
