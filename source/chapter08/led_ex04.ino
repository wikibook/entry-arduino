int led_red = 13;
int piezoBuzzer = 8;
unsigned long tmp_prev_time = 0;
unsigned long water_prev_time = 0;  

void setup() {
  pinMode(led_red, OUTPUT); 
  pinMode(piezoBuzzer, OUTPUT);
  Serial.begin(9600);
} 
  
void loop() { 
  unsigned long curr_time = millis();

  if(curr_time - tmp_prev_time >= 500) 
  {
    tmp_prev_time = curr_time;
    tmp();
  }

  if(curr_time - water_prev_time >= 5000) 
  {
    water_prev_time = curr_time;
    water(); 
  }   
}

void tmp() {
  int tmp_val = analogRead(A0); 
  
  float voltage = (tmp_val * 5.0) / 1024.0 * 1000;
  float tmp = ceil((voltage - 500.0) / 10.0);

  Serial.println(tmp);
 
  if(tmp >= 28)
  {
    digitalWrite(led_red, HIGH);    
  }
  else
  {
    digitalWrite(led_red, LOW);
  } 
}

void water() {
  int water_val = analogRead(A1); 

  Serial.println(water_val);
  
  if(water_val < 500) 
  {
    tone(piezoBuzzer, 262); 
    delay(500);
    tone(piezoBuzzer, 330); 
    delay(500);
    tone(piezoBuzzer, 392); 
    delay(500);
    noTone(piezoBuzzer);
  }
}
