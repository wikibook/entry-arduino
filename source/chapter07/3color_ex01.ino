int led_red = 11;
int led_green = 10;
int led_blue = 9;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_blue, OUTPUT);
  
  randomSeed(analogRead(A0)); 
}

void loop() {
  analogWrite(led_red, random(256)); 
  analogWrite(led_green, random(256)); 
  analogWrite(led_blue, random(256)); 
  delay(500);
}
