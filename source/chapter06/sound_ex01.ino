int led_blue = 13;
int led_green = 12;
int led_red = 11;
int led_yellow = 10;
int count = 0;

void setup() { 
  pinMode(led_blue, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT); 
} 
  
void loop() { 
  int sound_val = analogRead(A0); 
  
  if(sound_val > 500) 
  { 
    if(count == 4) 
    {
      count = 1;
    } 
    else 
    {
      count = count + 1;
    }
  
    if(count ==  1) 
    {
      digitalWrite(led_blue, HIGH); 
    } 
    else 
    {
      digitalWrite(led_blue, LOW); 
    }
  
    if(count ==  2) 
    {
      digitalWrite(led_green, HIGH); 
    } 
    else 
    {
      digitalWrite(led_green, LOW); 
    }
  
    if(count ==  3) 
    {
      digitalWrite(led_red, HIGH); 
    } 
    else 
    {
      digitalWrite(led_red, LOW); 
    }
  
    if(count ==  4) 
    {
      digitalWrite(led_yellow, HIGH); 
    } 
    else 
    {
      digitalWrite(led_yellow, LOW); 
    }     
  
    delay(500);
  }
}
