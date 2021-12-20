void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int giatri = analogRead(A0);
  int nhietdo = map(giatri, 20, 358, -40, 125);  
  if(nhietdo > 37) digitalWrite(10, HIGH);
  else digitalWrite(10, LOW);
  delay(10);
}
