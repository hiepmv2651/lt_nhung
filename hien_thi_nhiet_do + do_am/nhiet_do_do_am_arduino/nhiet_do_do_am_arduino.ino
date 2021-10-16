#include "DHT.h"

const int DHTPIN = 2;
const int DHTTYPE = DHT11;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  dht.begin();
}
void loop() {
  float doam = dht.readHumidity();
  float nhietdo = dht.readTemperature();
  
  if (nhietdo > 30) 
    digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
    
  if (doam < 40) 
    digitalWrite(12, HIGH);
  
  else
    digitalWrite(12, LOW);
}
