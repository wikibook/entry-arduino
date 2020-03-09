int dcmotor = 13;                  

void setup() {
  pinMode(dcmotor, OUTPUT);   
  Serial.begin(9600); 
} 
 
void loop() {
  int tmp_val = analogRead(A0); 
  
  float voltage = (tmp_val * 5.0) / 1024.0 * 1000.0;
  float tmp = ceil((voltage - 500.0) / 10.0);
  
  Serial.print("현재 온도 : ");
  Serial.println(tmp);
  
  if(tmp >= 27) 
  {
    digitalWrite(dcmotor, HIGH);
  }
  else 
  {
    digitalWrite(dcmotor, LOW);
  }
  delay(500);
}
