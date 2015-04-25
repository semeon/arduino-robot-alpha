#include <Arduino.h>
// #include "LED.h"
#include "wheel.h"


// Motor 1
// int dir1PinA = 2;
// int dir2PinA = 3;
// int speedPinA = 9; // Needs to be a PWM pin to be able to control motor speed

// Motor 2
// int dir1PinB = 4;
// int dir2PinB = 5;
// int speedPinB = 10; // Needs to be a PWM pin to be able to control motor speed

int cycles = 1;
WHEEL leftWheel;
WHEEL rightWheel;

void setup() {  
  leftWheel.init(4, 5, 10, 200);
  rightWheel.init(2, 3, 9, 200);
}

void loop() {
  if (cycles > 0) {
	cycles = cycles - 1;
	leftWheel.forward();
	rightWheel.forward();
	delay(2000);

	leftWheel.stop();
	rightWheel.stop();
	delay(500);

	leftWheel.reverse();
	rightWheel.reverse();
	delay(2000);

	leftWheel.stop();
	rightWheel.stop();
	delay(500);
  }
}
