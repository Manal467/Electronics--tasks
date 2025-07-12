/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;// the number of the pushbutton pin

const int ledPin1 =  13;      // the number of the LED pin
const int ledPin2 =  12;
const int ledPin3 =  11; 


// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  // initialize the LED pin as an output:
   pinMode(ledPin1, OUTPUT);
   pinMode(ledPin2, OUTPUT);
   pinMode(ledPin3, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin1, HIGH);
    delay(100);
  } else {
    // turn LED off:
    digitalWrite(ledPin1, LOW);
    delay(100);
}
  
  if (buttonState2 == HIGH) {
    digitalWrite (ledPin2, HIGH);
    delay(100);
  } else {
    digitalWrite (ledPin2, LOW);
    delay(100);
  }
  
  if (buttonState3 == HIGH) {
    digitalWrite (ledPin3, HIGH); 
    delay(100);
  } else {
    digitalWrite (ledPin3, LOW); 
    delay(100);
  }
}
