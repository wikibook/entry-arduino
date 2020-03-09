int led_blue = 13;
int led_green = 12;
int led_red = 11;
int led_yellow = 10;
int touchPin = 8;
int count = 0;

void setup() {
  pinMode(led_blue, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
pinMode(touchPin, INPUT);
}

void loop() {
  int touch_val = digitalRead(touchPin);
  
  if(touch_val == HIGH) 
  {
    count = count + 1;
    digitalWrite(led_blue, HIGH);
    if (count > 10)
      digitalWrite(led_green, HIGH);
    if (count > 20)
      digitalWrite(led_red, HIGH);
    if (count > 30)
      digitalWrite(led_yellow, HIGH);    
  } 
  else 
  {
    count = 0;
    digitalWrite(led_blue, LOW);
    digitalWrite(led_green, LOW);
    digitalWrite(led_red, LOW);
    digitalWrite(led_yellow, LOW);
  }
  delay(100);
}
