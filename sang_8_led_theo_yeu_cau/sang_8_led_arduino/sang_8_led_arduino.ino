byte ledPin[] = {6, 7, 8, 9, 10, 11, 12, 13};
void setup() {
  for (int x = 0; x < 8; x++) {
    pinMode(ledPin[x], OUTPUT);
  }
}
void loop() {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  //nhay 2 den sang tuan tu
  for (int x = 0; x < 8; x += 2) {
    digitalWrite(ledPin[x], HIGH);
    digitalWrite(ledPin[x + 1], HIGH);
    delay(500);
  }
  delay(1000);

  //tat den port le
  for (int x = 0; x < 8; x += 2) {
    digitalWrite(ledPin[x], LOW);
  }
  delay(1000);

  //sang tat 3 lan
  for (int y = 0; y < 3; y++) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    delay(1000);
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    delay(1000);
  }
}
