void setup() {
  Serial.begin(9600);
}

void loop() {
  sum();
}

void sum() {
  int total = 10;
  Serial.print("총 합 : ");
  Serial.print(total);
  Serial.end();
}
