void setup() {
  Serial.begin(9600);
}

void loop() {
  sum(10);
}

void sum(int x) {
  int total = 10 + x;
  Serial.print("총 합 : ");
  Serial.print(total);
  Serial.end();
}
