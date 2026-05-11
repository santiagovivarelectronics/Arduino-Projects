# LED Control Project

## Description
This is my first Arduino project.

The goal of this project is to understand the basics of embedded systems programming using Arduino and C/C++.

## Components
- Arduino Uno
- LED
- Resistor
- Breadboard
- Jumper wires

## What I Learned
- How to configure output pins
- Difference between HIGH and LOW
- Using delay()
- Understanding setup() and loop()
- Basic embedded systems logic

## Code Function
The LED turns on for 1 second and turns off for 1 second repeatedly.

## Future Improvements
- Add button input
- Add buzzer
- Create traffic light system
- Add sensors  
// Here the code :
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(3000);

  digitalWrite(13, LOW);
  delay(1000);

  digitalWrite(12, HIGH);
  delay(4000);

  digitalWrite(12, LOW);
  delay(1000);

  digitalWrite(11, HIGH);
  delay(5000);

  digitalWrite(11, LOW);
  delay(1000);
}
## Circuit Preview
![Circuit](IMG_5415.jpeg)
