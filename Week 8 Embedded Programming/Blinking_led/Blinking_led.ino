/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 3;     // PUSH BUTTON = Attiny Pin: 10 (PA3) / Aduino Pin: 3
const int ledPin =  7;      // LED = Attiny pin: 6 (PA7) / Arduino Pin: 7

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH); 
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    delay(50);              // wait
    digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
    delay(50);              // wait
  
  } else {
    // turn LED ON:
    digitalWrite(ledPin, HIGH);
        delay(20);              // wait
    digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
    delay(20);              // wait
  }
}





