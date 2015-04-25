class WHEEL {

	private:


	int dirPin1;
	int dirPin2;
	int speedPin;
	int defSpeed; // up to 255

	public:

	void init(int p1, int p2, int p3, int s) {
		dirPin1 = p1;
		dirPin2 = p2;
		speedPin = p3;
		defSpeed = s;
		
		pinMode(dirPin1, OUTPUT);
		pinMode(dirPin2, OUTPUT);
		pinMode(speedPin, OUTPUT);
	}

	void stop() {
		analogWrite(speedPin, 0);
    	digitalWrite(dirPin1, LOW);
    	digitalWrite(dirPin2, HIGH);
	}

	void forward() {
		analogWrite(speedPin, defSpeed);
		digitalWrite(dirPin1, LOW);
		digitalWrite(dirPin2, HIGH);
	}

	void reverse() {
		analogWrite(speedPin, defSpeed);
		digitalWrite(dirPin1, HIGH);
		digitalWrite(dirPin2, LOW);	
	}
};


