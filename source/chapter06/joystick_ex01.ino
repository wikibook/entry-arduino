int joystick_x = A0;
int joystick_y = A1;
int joystick_sw = 7;
int led_blue = 13;
int led_green = 12;
int led_red = 11;
int led_yellow = 10;

void setup() {
  pinMode(joystick_sw, INPUT_PULLUP); 
  pinMode(led_blue, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
}

void loop() {
  int x = analogRead(joystick_x);
  int y = analogRead(joystick_y); 
  int sw = digitalRead(joystick_sw); 
  
  if(x < 300) 
  {
    digitalWrite(led_red, HIGH); 
  } 
  else 
  {
    digitalWrite(led_red, LOW); 
  }
  
  if(x > 900) 
  {
    digitalWrite(led_yellow, HIGH); 
  } 
  else 
  {
    digitalWrite(led_yellow, LOW); 
  }
  
  if(y < 300) 
  {
    digitalWrite(led_blue, HIGH); 
  } 
  else 
  {
    digitalWrite(led_blue, LOW); 
  }
  
  if(y > 900) 
  {
    digitalWrite(led_green, HIGH); 
  } 
  else 
  {
    digitalWrite(led_green, LOW); 
  }
  
  if(sw == HIGH) 
  {
    digitalWrite(led_red, LOW);
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_green, LOW);
    digitalWrite(led_blue, LOW);        
  } 
  else 
  {
    digitalWrite(led_red, HIGH);
    digitalWrite(led_yellow, HIGH);
    digitalWrite(led_green, HIGH);
    digitalWrite(led_blue, HIGH);
  }
}
