int x = 0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  x = analogRead(A0);
  int do_sang = map(x, 0, 1023, 0, 255);
  analogWrite(9, do_sang);
}
