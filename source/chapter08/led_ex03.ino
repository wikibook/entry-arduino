int led_red = 13; 
int pirPin = 8; 
  
void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(pirPin, INPUT);}

void loop() {
  int cds_val = analogRead(A0); 
  int pir_val = digitalRead(pirPin);
    
  if(cds_val <= 500 && pir_val == HIGH) 
  {
    digitalWrite(led_red, HIGH);
  }
  else
  {
    digitalWrite(led_red, LOW );
  }
}
