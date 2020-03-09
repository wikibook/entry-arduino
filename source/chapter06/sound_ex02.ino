int led[4] = {13, 12, 11, 10};  
int count = 0;

void setup() { 
  for(int i = 0; i < 4; i++)      
    pinMode(led[i], OUTPUT);
}   

void loop() { 
  int sound_val = analogRead(A0); 
  
  if(sound_val > 500) 
  { 
    if(count == 4) 
    {
      count = 1;
    } 
    else 
    {
      count = count + 1;
    }
  
    for(int i = 1; i <= 4; i++) 
    {
      if(i == count) 
      {        
        digitalWrite(led[i-1], HIGH);   
      } 
      else 
      { 
        digitalWrite(led[i-1], LOW);
      }
    }
    delay(500);
  }
}
