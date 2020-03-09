int led_a = 2;
int led_b = 3;
int led_c = 4;
int led_d = 5;
int led_e = 6;
int led_f = 7;
int led_g = 8;
int on = HIGH; 
int off = LOW;
 
void setup() {
  pinMode(led_a, OUTPUT);
  pinMode(led_b, OUTPUT);
  pinMode(led_c, OUTPUT);
  pinMode(led_d, OUTPUT);
  pinMode(led_e, OUTPUT);
  pinMode(led_f, OUTPUT);
  pinMode(led_g, OUTPUT);    
}
 
void loop() {
  setSegment(on, on, on, on, on, on, off);
  delay(1000);
  setSegment(off, on, on, off, off, off, off);
  delay(1000);
  setSegment(on, on, off, on, on, off, on);
  delay(1000);
  setSegment(on, on, on, on, off, off, on);
  delay(1000);
  setSegment(off, on, on, off, off, on, on);
  delay(1000);
  setSegment(on, off, on, on, off, on, on);
  delay(1000);  
  setSegment(on, off, on, on, on, on, on);
  delay(1000);
  setSegment(on, on, on, off, off, on, off);
  delay(1000);  
  setSegment(on, on, on, on, on, on, on);
  delay(1000);
  setSegment(on, on, on, off, off, on, on);
  delay(1000); 
}


void setSegment(int a, int b, int c, int d, int e, int f, int g) {
  digitalWrite(led_a, a);
  digitalWrite(led_b, b);
  digitalWrite(led_c, c);
  digitalWrite(led_d, d);
  digitalWrite(led_e, e);
  digitalWrite(led_f, f);
  digitalWrite(led_g, g);
}
