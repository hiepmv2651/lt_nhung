#include "DHT.h"
#include <LiquidCrystal.h>

const int DHTPIN = 8;
const int DHTTYPE = DHT11;
DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  dht.begin();
}
void loop() {
  float nhietdo = dht.readTemperature();
  lcd.begin(16, 2);
  lcd.print("Nhiet do: ");
  lcd.print(nhietdo);
  lcd.setCursor(0,1);
}
