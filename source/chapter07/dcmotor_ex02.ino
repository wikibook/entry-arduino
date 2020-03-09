int DCmotor = 11;                  
 
void setup() {
  pinMode(DCmotor, OUTPUT);       
} 
 
void loop() {
  for(int i = 0; i <= 255; i++)  
  {      
    analogWrite(DCmotor, i);             
    delay(50);                          
  }            
  
  for(int i = 255; i >= 0; i--) 
  {     
    analogWrite(DCmotor, i);              
    delay(50);                          
  }  
  delay(3000);                    
}
