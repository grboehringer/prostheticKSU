#include <ArduinoBLE.h>
//#include <CurieBLE.h>

BLEService boaService("FD93");//add uuid
BLEUnsignedCharCharacteristic boaChar("96D8B57A-51E1-11EA-8D77-2E728CE88125", BLERead | BLENotify);//add uuid

int flexiForcePin = A0;

void setup() {
  Serial.begin(9600);
  if (!BLE.begin()){
    Serial.println("Starting BLE failed.");

    while(1);
  }
  BLE.setLocalName("BoaMonitor");
  BLE.setAdvertisedService(boaService);
  boaService.addCharacteristic(boaChar);
  BLE.addService(boaService);

  BLE.advertise();
  Serial.println("Bluetooth device active, waiting for connections...");


}

void loop() {
  BLEDevice central = BLE.central();

  if (central){
    Serial.print("Connected to central: ");
    Serial.println(central.address());
  }
  
  while(central.connected()){
    int flexiForceReading = analogRead(flexiForcePin);

    Serial.println(flexiForceReading);
    delay(250);
  }

}
//https://github.com/grboehringer/prostheticKSU.git
