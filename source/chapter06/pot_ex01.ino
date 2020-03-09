int led_red = 11;

void setup() {
  pinMode(led_red, OUTPUT);
}

void loop() {
  int pot_val = map(analogRead(A0), 0, 1023, 0, 255);
  analogWrite(led_red, pot_val);
}
