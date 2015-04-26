class WHEEL {

	private:


	int dirPin1;
	int dirPin2;
	int speedPin;
	int gears[3];

	public:

	void init(int p1, int p2, int p3) {
		dirPin1 = p1;
		dirPin2 = p2;
		speedPin = p3;
		
		pinMode(dirPin1, OUTPUT);
		pinMode(dirPin2, OUTPUT);
		pinMode(speedPin, OUTPUT);

		gears[0] = 50;
		gears[1] = 150;
		gears[2] = 250;
	}

	void setGears(int g1, int g2, int g3) {
		gears[0] = g1;
		gears[1] = g2;
		gears[2] = g3;
	}

	void stop() {
		analogWrite(speedPin, 0);
    	digitalWrite(dirPin1, LOW);
    	digitalWrite(dirPin2, HIGH);
	}

	void forward(int g) {
		analogWrite(speedPin, gears[g]);
		digitalWrite(dirPin1, LOW);
		digitalWrite(dirPin2, HIGH);
	}

	void reverse(int g) {
		analogWrite(speedPin, gears[g]);
		digitalWrite(dirPin1, HIGH);
		digitalWrite(dirPin2, LOW);	
	}
};


