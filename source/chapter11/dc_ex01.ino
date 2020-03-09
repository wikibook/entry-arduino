int switch_stop = 11; 
int switch_breeze = 10; 
int switch_strong = 9;  
int DCmotor = 6;                  
 
void setup() {
  pinMode(DCmotor, OUTPUT);    
  pinMode(switch_stop, INPUT);
  pinMode(switch_breeze, INPUT);
  pinMode(switch_strong, INPUT);   
} 
 
void loop() {
  if(digitalRead(switch_stop) == HIGH)
    analogWrite(DCmotor, 0);
     
  if(digitalRead(switch_breeze) == HIGH)
    analogWrite(DCmotor, 150); 
         
  if(digitalRead(switch_strong) == HIGH)
    analogWrite(DCmotor, 255); 
}
