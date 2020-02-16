#include <CurieBLE>

int flexiForcePin = A0;

void setup() {
  Serial.begin(9600);
  stuff

}

void loop() {
  int flexiForceReading = analogRead(flexiForcePin);

  Serial.println(flexiForceReading);
  delay(250);

}
https://github.com/grboehringer/prostheticArduino.git
