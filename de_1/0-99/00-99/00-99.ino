int seg1 = 4;
int seg2 = 3;
int i = 0;
int j = 0;
int n = 0;

int den[7] = {7, 8, 9, 10, 11, 12, 13};
int matran[10][7] = {{0, 1, 1, 1, 1, 1, 1}, // 0
  {0, 0, 0, 0, 1, 1, 0}, // 1
  {1, 0, 1, 1, 0, 1, 1}, // 2
  {1, 0, 0, 1, 1, 1, 1}, // 3
  {1, 1, 0, 0, 1, 1, 0}, // 4
  {1, 1, 0, 1, 1, 0, 1}, // 5
  {1, 1, 1, 1, 1, 0, 1}, // 6
  {0, 0, 0, 0, 1, 1, 1}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 0, 1, 1, 1, 1}, // 9
};

void setup()  {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(seg1, 0);
    digitalWrite(seg2, 1);

    for (j = 0; j < 7; j++)
      digitalWrite(den[j], matran[n][j]);

    delay(50);

    digitalWrite(seg1, 1);
    digitalWrite(seg2, 0);

    for (j = 0; j < 7; j++)
      digitalWrite(den[j], matran[i][j]);

    delay(50);

    if (i == 9) {
      n++;
      if (n > 9)
        n = 0;
    }
  }
}
