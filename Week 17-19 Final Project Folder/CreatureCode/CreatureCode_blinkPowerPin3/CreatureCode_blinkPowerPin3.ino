
int powerPin = 3; // fletch added power for light sensor
int inA1 = 2; // input 1 of the stepper
int inA2 = 4; // input 2 of the stepper
int inB1 = 6; // input 3 of the stepper
int inB2 = 7; // input 4 of the stepper
int lightsensorPin = A3;
int lightsensorValue = 0;
int stepDelay = 25; // Delay between steps in milliseconds

void setup() { 
pinMode(lightsensorPin, INPUT);
pinMode(powerPin,OUTPUT);
pinMode(9, OUTPUT); //backlights
pinMode(10, OUTPUT);//lurelight
//initialize the serial port:
Serial.begin(9600);


  pinMode(inA1, OUTPUT);     
  pinMode(inA2, OUTPUT);     
  pinMode(inB1, OUTPUT);     
  pinMode(inB2, OUTPUT);
}

void step1() {
  digitalWrite(inA1, LOW);   
  digitalWrite(inA2, HIGH);   
  digitalWrite(inB1, HIGH);   
  digitalWrite(inB2, LOW);   
  delay(stepDelay); 
}
void step2() {
  digitalWrite(inA1, LOW);   
  digitalWrite(inA2, HIGH);   
  digitalWrite(inB1, LOW);   
  digitalWrite(inB2, HIGH);   
  delay(stepDelay);
}
void step3() {
  digitalWrite(inA1, HIGH);   
  digitalWrite(inA2, LOW);   
  digitalWrite(inB1, LOW);   
  digitalWrite(inB2, HIGH);   
  delay(stepDelay);
}
void step4() {
  digitalWrite(inA1, HIGH);   
  digitalWrite(inA2, LOW);   
  digitalWrite(inB1, HIGH);   
  digitalWrite(inB2, LOW);   
  delay(stepDelay);
}
void stopMotor() {
  digitalWrite(inA1, LOW);   
  digitalWrite(inA2, LOW);   
  digitalWrite(inB1, LOW);   
  digitalWrite(inB2, LOW);   
}
void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(powerPin,HIGH); // fletch added
 lightsensorValue = analogRead(lightsensorPin);
  Serial.println(lightsensorValue);
  delay(500);

  if (lightsensorValue > 600 ){
    Serial.println("Becareful of the Grue!");
  }
  else {
    Serial.println("A Grue is going to eat you!!");
   for (int i=0; i<=20; i++){ 
    step1(); 
    step2();
    step3();
    step4();
  }
  stopMotor();
  delay(300);
   digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for one third a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW

  delay(300);
   digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for one third a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  
  delay(300);
   digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for one third a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW

  delay(300);              // wait for one third a  second
   digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for aone third a  second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(300);              // wait for one third a second

   digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for aone third a  second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(300);              // wait for one third a second

   digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for aone third a  second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(300);              // wait for one third a second

   digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for aone third a  second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(300);              // wait for one third a second

  
   
  for (int i=0; i<=20; i++){
    step3();
    step2();
    step1();
    step4(); 
  }
  
  stopMotor();
//  delay(500); 
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  }//end else
}
