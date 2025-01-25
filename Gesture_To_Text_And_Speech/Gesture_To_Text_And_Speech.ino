#include <SoftwareSerial.h>
const int flexPin1 = A0;


SoftwareSerial Bluetooth(10, 11); 

void setup() {
  Serial.begin(9600);         
  Bluetooth.begin(9600);      
  pinMode(flexPin1, INPUT);   

  Serial.println("HC-05 Bluetooth Module Initialized");
  
}

void loop() {
  int flexValue1 = analogRead(flexPin1); 
  
  if (flexValue1 < 100) {               
    Serial.println("two thirty in the morning, 11 fails, but we're there. Alhamdulillah.");
    Bluetooth.println("two thirty in the morning, 11 fails, but we're there. Alhamdulillah.");
    delay(1000); 
  }

  
  if (Bluetooth.available()) {
    String received = Bluetooth.readString();
    Serial.println("Received via Bluetooth: " + received);
  }

  if (Serial.available()) {
    String input = Serial.readString();
    Bluetooth.println("Forwarding: " + input);
    Serial.println("Forwarding: " + input);
  }
}
