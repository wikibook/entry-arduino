int trigPin = 2;
int echoPin = 4;
int led_blue = 13;
int led_green = 12;
int led_red = 11;
int led_yellow = 10;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led_blue, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(1);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);      

  unsigned long  distance = (pulseIn(echoPin, HIGH) * 34000/ 1000000 ) / 2;  

  Serial.println(distance);
  
  if(distance < 15) 
  {
    digitalWrite(led_blue, HIGH);
  } 
  else 
  { 
    digitalWrite(led_blue, LOW);
  }
  
  if(distance < 10) 
  {
    digitalWrite(led_green, HIGH);
  } 
  else 
  { 
    digitalWrite(led_green, LOW);
  }
  
  if(distance < 7) 
  {
    digitalWrite(led_red, HIGH);
  } 
  else 
  { 
    digitalWrite(led_red, LOW);
  }
  
  if(distance < 4) 
  {
    digitalWrite(led_yellow, HIGH);
  } 
  else 
  { 
    digitalWrite(led_yellow, LOW);    
  }
  
  delay(500);
}
