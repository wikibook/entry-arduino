int led_red = 13;
int led_green = 11;


void setup() {
  pinMode(led_red, OUTPUT);  
  pinMode(led_green, OUTPUT);  
}

void loop() {
  int soilwater = analogRead(A0); 
  
  int value = map(analogRead(soilwater), 0, 1023, 0, 255); 
  analogWrite(led_green, 255 - value); 
                
  if(soilwater > 1000)
  {        
    digitalWrite(led_red, HIGH);           
  } 
  else 
  {                             
    digitalWrite(led_red, LOW); 
  }  
}
