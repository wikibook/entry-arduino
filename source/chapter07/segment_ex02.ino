int on = HIGH; 
int off = LOW;

int pins[ ] = {2, 3, 4, 5, 6, 7, 8};

int digits[10][7] = {
  {on, on, on, on, on, on, off},  
  {off, on, on, off, off, off, off},
  {on, on, off, on, on, off, on},
  {on, on, on, on, off, off, on},
  {off, on, on, off, off, on, on},
  {on, off, on, on, off, on, on},
  {on, off, on, on, on, on, on},
  {on, on, on, off, off, on, off},
  {on, on, on, on, on, on, on},
  {on, on, on, off, off, on, on}
 };
 
void setup() {
  for(int i = 0; i < 7; i++)
  {
    pinMode(pins[i], OUTPUT);
  }
}
 
void loop() {
  for(int i = 0; i <= 9; i++)
  {
    for(int j = 0; j < 7; j++)
    {
      digitalWrite(pins[j], digits[i][j]);
    }
    delay(1000);
  }
}
