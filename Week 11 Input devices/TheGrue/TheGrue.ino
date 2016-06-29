#include <SoftwareSerial.h>

SoftwareSerial mySerial = SoftwareSerial (0,2);

int sensorPin = A3;         
int sensorValue = 0;  

void setup() {
  mySerial.begin(9600);
  mySerial.println("This is a nice well lighted room");
}

void loop() {
  sensorValue = analogRead(sensorPin);
  mySerial.println(sensorValue);
  delay(500);

  if (sensorValue < 900){
    mySerial.println("Becareful of the Grue!");
  }
  else {
    mySerial.println("A Grue is going to eat you!!");
  }
}

