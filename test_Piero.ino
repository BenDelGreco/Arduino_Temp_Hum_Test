#include "dht.h"
//#include <TM1637Display.h>

//#define CLK 4
//#define DIO 5

#define DHT11_PIN 7

dht DHT;


void setup() {
Serial.begin(9600);

}

void loop() {
  
 int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperatura = ");
  Serial.println(DHT.temperature);
  Serial.print("Umidità = ");
  Serial.println(DHT.humidity);
  delay(1000);
}
