void setup() {
  Serial.begin(9600);
}

void loop() {
  int total = sum(10);
  Serial.print("총 합 : ");
  Serial.print(total);
  Serial.end();
}

int sum(int x) {
  int y = 10 + x;
  return y;
}
