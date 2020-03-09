int led_red = 11;
int led_green = 10;
int led_blue = 9;
int tack_switch = 8; 
int count = 0;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_blue, OUTPUT);
  pinMode(tack_switch, INPUT);
}

void loop() {
  
  if(digitalRead(tack_switch) == HIGH) 
  {
    if(count == 6) 
      count = 1;
    else 
      count = count + 1;
    
    if(count == 1)
      setColor(255, 0, 0);
      
    if(count == 2)
      setColor(0, 255, 0);
      
    if(count == 3)
      setColor(0, 0, 255);
      
    if(count == 4)
      setColor(255, 255, 0);
      
    if(count == 5)
      setColor(255, 0, 255);
      
    if(count == 6)
      setColor(0, 0, 0); 
        
    delay(300);        
  }  
}

void setColor(int red, int green, int blue)
{
  analogWrite(led_red, red);
  analogWrite(led_green, green);
  analogWrite(led_blue, blue);
}
