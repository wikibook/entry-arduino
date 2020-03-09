int led_red = 12;
int led_blue = 13;

void setup() {
  pinMode(led_red, OUTPUT); 
  pinMode(led_blue, OUTPUT); 
  Serial.begin(9600); 
} 
  
void loop() { 
  int value = analogRead(A0); 
  
  float voltage = (value * 5.0) / 1024.0 * 1000.0; 
  float tmp = ceil((voltage - 500.0) / 10.0);
  
  Serial.print("현재 온도는 ");
  Serial.println(tmp);
    
  if(tmp <= 10) 
  {
    digitalWrite(led_red, HIGH);
  }
  else 
  {
    digitalWrite(led_red, LOW);
  }
  
  if(tmp >= 30) 
  {
    digitalWrite(led_blue, HIGH);
  }
  else 
  {
    digitalWrite(led_blue, LOW);
  }
  delay(500); 
}
