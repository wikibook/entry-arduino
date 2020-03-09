int num[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

void setup() {
  Serial.begin(9600); 
}

void loop() {
  for(int i=0; i <= 10; i++)  
  {                        
    Serial.println(num[i]);
  }
  Serial.end();
}
