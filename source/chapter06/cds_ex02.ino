int led_red = 11;  

void setup() {
  pinMode(led_red, OUTPUT);
}

void loop() {
  int cds_val = map(analogRead(A0), 0, 1023, 0, 255);
  cds_val = constrain(cds_val, 0, 255); 
  analogWrite(led_red, cds_val); 
}
