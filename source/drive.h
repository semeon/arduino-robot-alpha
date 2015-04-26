class DRIVE {

	private:

	WHEEL lWheel;
	WHEEL rWheel;


	public:

	void init() {
		lWheel.init(4, 5, 10);
		// leftWheel.setGears(50, 150, 250);
		rWheel.init(2, 3, 9);
	}

	void stop() {
		lWheel.stop();
		rWheel.stop();
	}

	void forward(int gear) {
		lWheel.forward(gear);
		rWheel.forward(gear);
	}

	void reverse() {
		lWheel.reverse(2);
		rWheel.reverse(2);
	}

	void turnRight() {
		lWheel.forward(2);
		rWheel.reverse(2);

		delay(1075);
		stop();
	}

	void turnLeft() {
		lWheel.reverse(2);
		rWheel.forward(2);

		delay(1175);
		stop();		
	}

};


