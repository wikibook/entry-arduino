int led_red = 11;
int led_green = 10;
int led_blue = 9;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_blue, OUTPUT);
}

void loop() {
  int color_val = random(1, 5);
  if(color_val == 1)
  {
    setColor(255, 0, 0);
  }
  
  if(color_val == 2)
  {
    setColor(255, 255, 0);
  }
  
  if(color_val == 3)
  {
    setColor(255, 192, 203);
  }
  
  if(color_val == 4)
  {
    setColor(0, 0, 255);
  }  
  
  delay(3000);
}

void setColor(int red, int green, int blue) {
  analogWrite(led_red, red);
  analogWrite(led_green, green);
  analogWrite(led_blue, blue);
}
