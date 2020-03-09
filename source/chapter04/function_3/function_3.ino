void setup() {
  Serial.begin(9600);
}

void loop() {
  int total = sum();
  Serial.print("총 합 : ");
  Serial.print(total);
  Serial.end();
}

int sum() {
  int x = 10;
  return x;
}
