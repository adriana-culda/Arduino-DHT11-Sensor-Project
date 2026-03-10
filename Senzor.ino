#include "DHT.h"
#define DHTPIN 5
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  delay(2000);

  float umiditate = dht.readHumidity();
  float temperatura = dht.readTemperature();

  Serial.print("umiditate: ");
  Serial.print(umiditate);
  Serial.print("\n");


  Serial.print("temperatura: ");
  Serial.print(temperatura);
  Serial.print("\n");

  if(umiditate >= 40 && umiditate <= 60)
  {
    digitalWrite(6, HIGH);
  }
  else
  {
    digitalWrite(6, LOW);
  }

  if(temperatura >= 22 && temperatura <= 30)
  {
    digitalWrite(7, HIGH);
  }
  else
  {
    digitalWrite(7, LOW);
  }

}

