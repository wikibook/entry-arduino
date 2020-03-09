int led_green = 13;
int led_yellow = 12;
int led_red = 11;

void setup() { 
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);
} 

void loop() { 
  digitalWrite(led_green, HIGH); 
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, LOW); 
  
  delay(2000);
  
  digitalWrite(led_green, LOW); 
  digitalWrite(led_yellow, HIGH);
  digitalWrite(led_red, LOW); 
  
  delay(2000);
  
  digitalWrite(led_green, LOW); 
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, HIGH); 
  
  delay(2000);        
}
