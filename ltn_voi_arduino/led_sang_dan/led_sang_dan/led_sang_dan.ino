int do_sang;

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for(do_sang = 0; do_sang <= 255; do_sang += 5)
  {
    analogWrite(9, do_sang);
    delay(30);
  }
  for(do_sang = 255; do_sang >= 0; do_sang -= 5)
  {
    analogWrite(9, do_sang);
    delay(30);
  }
}
