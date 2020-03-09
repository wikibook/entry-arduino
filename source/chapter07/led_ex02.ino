int led_green = 13;
int led_yellow = 12;
int led_red = 11;

void setup() { 
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);
  
  Serial.begin(9600);  
} 
  
void loop() { 
  int count = 0;
  
  while(count < 100)
  {
    count = count + 1;
    Serial.println(count);
    
    if(count % 2 == 0)  
      digitalWrite(led_green, HIGH); 
    if(count % 3 == 0)  
      digitalWrite(led_yellow, HIGH); 
    if(count % 4 == 0)  
      digitalWrite(led_red, HIGH);  
        
    delay(1000); 
    
    digitalWrite(led_green, LOW); 
    digitalWrite(led_yellow, LOW); 
    digitalWrite(led_red, LOW);
  }  
}
