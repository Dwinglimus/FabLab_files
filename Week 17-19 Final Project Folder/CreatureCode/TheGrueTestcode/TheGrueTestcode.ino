
int sensorPin = A3;         
int sensorValue = 0;  

void setup() {
  Serial.begin(9600);
  Serial.println("This is a nice well lighted room");
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(500);

  if (sensorValue < 900){
    Serial.println("Becareful of the Grue!");
  }
  else {
    Serial.println("A Grue is going to eat you!!");
  }
}

