#include <SoftwareSerial.h>

SoftwareSerial mySerial = SoftwareSerial (0,2);

int sensorPin = A3;         
int sensorValue = 0;  

void setup() {
  mySerial.begin(9600);
  mySerial.println("I am Batman!");
}

void loop() {
  sensorValue = analogRead(sensorPin);
  mySerial.println(sensorValue);
  delay(500);

  if (sensorValue > 5){
    mySerial.println(" "if you stare into the abyss, the abyss stares back at you"");
  }
  else {
    mySerial.println("Let there be light");
  }
}

