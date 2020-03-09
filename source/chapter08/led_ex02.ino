int led_a = 2;
int led_b = 3;
int led_c = 4;
int led_d = 5;
int led_e = 6;
int led_f = 7;
int led_g = 8;
int tact_switch = 9;
int on = HIGH; 
int off = LOW;
int count = 0 ;
 
void setup() {
  pinMode(led_a, OUTPUT);
  pinMode(led_b, OUTPUT);
  pinMode(led_c, OUTPUT);
  pinMode(led_d, OUTPUT);
  pinMode(led_e, OUTPUT);
  pinMode(led_f, OUTPUT);
  pinMode(led_g, OUTPUT);  
  pinMode(tact_switch, INPUT);  
}
 
void loop() {

  if(digitalRead(tact_switch) == HIGH) 
  {
    if(count == 9)
      count = 0 ;
    else  
      count = count + 1;    
      
    if(count == 0)
      setSegment(on, on, on, on, on, on, off);  
    if(count == 1)
      setSegment(off, on, on, off, off, off, off);
    if(count == 2)  
      setSegment(on, on, off, on, on, off, on);  
    if(count == 3)
      setSegment(on, on, on, on, off, off, on);
    if(count == 4) 
      setSegment(off, on, on, off, off, on, on);
    if(count == 5)
      setSegment(on, off, on, on, off, on, on);
    if(count == 6)
      setSegment(on, off, on, on, on, on, on);    
    if(count == 7)
      setSegment(on, on, on, off, off, on, off);
    if(count == 8) 
      setSegment(on, on, on, on, on, on, on);
    if(count == 9)
      setSegment(on, on, on, off, off, on, on);
      
    delay(500);
  }   
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
