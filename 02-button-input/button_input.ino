# Button Input Project

## Description
This Arduino project uses a push button to control an LED.

The goal of this project is to understand digital inputs, button logic and interaction between hardware and software in embedded systems.

## Components
- Arduino Uno
- Push Button
- LED
- Resistor
- Breadboard
- Jumper wires

## What I Learned
- How to use digital inputs
- Using INPUT and OUTPUT modes
- Reading button states with digitalRead()
- Using if statements in embedded systems
- Basic hardware and software interaction

## Code

```cpp
int buttonPin = 2;
int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  int buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

}
