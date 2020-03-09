int DCmotor = 11;                 
 
void setup() {
  pinMode(DCmotor, OUTPUT);       
} 
 
void loop() {
  digitalWrite(DCmotor, HIGH);     
  delay(3000);  
  digitalWrite(DCmotor, LOW);           
  delay(3000); 
}
