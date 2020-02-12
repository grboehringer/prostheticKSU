int flexiForcePin = A0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int flexiForceReading = analogRead(flexiForcePin);

  Serial.println(flexiForceReading);
  delay(250);

}
