#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
const int relayPin = 5;
void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_Sprayer");
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH);
}

void loop() {
  if (SerialBT.available()) {
    char command = SerialBT.read();
    if (command == '1') {
      digitalWrite(relayPin, LOW);
      Serial.println("Sprayer ON");
    }

    else if (command == '0') {
      digitalWrite(relayPin, HIGH);
      Serial.println("Sprayer OFF");
    }
  }
}
