int DCmotor = 13;                  
int pirPin = 8; 

void setup() {
  pinMode(DCmotor, OUTPUT);    
  pinMode(pirPin, INPUT); 
} 
 
void loop() {
  int pir_val = digitalRead(pirPin);
  
  if(pir_val == HIGH) 
  {
    digitalWrite(DCmotor, HIGH);
  } 
  else 
  {
    digitalWrite(DCmotor, LOW);
  } 
}
