int led_yellow = 13;
int tact_switch = 8; 

void setup(){
  pinMode(led_yellow, OUTPUT);
  pinMode(tact_switch, INPUT);
}

void loop(){
  if(digitalRead(tact_switch) == HIGH) 
  {
    digitalWrite(led_yellow, HIGH);
  }
  else 
  {
    digitalWrite(led_yellow, LOW);
  }
}
