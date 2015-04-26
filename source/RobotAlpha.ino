#include <Arduino.h>
#include "wheel.h"
#include "drive.h"

int cycles = 1;

DRIVE drive;

void setup() {  
	drive.init();
}

void loop() {
  if (cycles > 0) {
	cycles = cycles - 1;
	
	drive.forward(2);
	delay(5000);
	drive.stop();
	delay(1000);

	drive.turnLeft();
	delay(1000);
	
	drive.forward(2);
	delay(5000);
	drive.stop();
	delay(1000);

	drive.turnRight();
	delay(1000);

	drive.forward(2);
	delay(5000);
	drive.stop();
	delay(1000);

 
  }
}
